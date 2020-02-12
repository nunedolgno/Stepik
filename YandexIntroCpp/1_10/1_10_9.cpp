/*
� ���� �������� ������� ���������� ������������� ��������������� ���, ������� ������� ���������� � ���� ������� �����, ������ �� ������� ����� ��������� �������� �� 0 �� 255, ����������� �������. ��� ������� ���������� IP-�������:
127.0.0.0
192.168.0.1
255.0.255.255
�������� ���������, ������� ����������, �������� �� �������� ������ ���������� IP-�������.

������� ������
��������� �������� �� ���� ������ �� ������������ ��������.

�������� ������
���� ��� ������ �������� ���������� ������� IP-������, �������� YES, ����� �������� NO.

����������
��� �������� �� ������ � ����� ������ ������������ �������� stoi, ������� ��������� �� ���� ������, � ���������� �����.

Sample Input:
127.0.0.1

Sample Output:
YES
*/

#include <iostream>
#include <string>
#include <cstring>
#include <ctype.h>
using namespace std;

bool is_number(char* s)
{
	bool result = true;
	for (int i = 0; i < strlen(s); i++)
	{
		if (!(s[i] >= '0' && s[i] <= '9'))
		{
			result = false;
			break;
		}
	}
	return result;
}


bool isIPv4(string s)
{
	int num;
	int flag = 1;
	int counter = 0;
	char * str = new char[s.size() + 1];
	std::copy(s.begin(), s.end(), str);
	str[s.size()] = '\0';
	char* p = strtok(str, ".");

	while (p && flag)
	{
		if (!is_number(p))
		{
			flag = 0;
			break;
		}

		num = atoi(p);

		if (num >= 0 && num <= 255 && (counter++ < 4))
		{
			flag = 1;
			p = strtok(NULL, ".");
		}
		else
		{
			flag = 0;
			break;
		}
	}

	if (s[0] == '.' || s[s.size() - 1] == '.')
	{
		flag = 0;
	}

	delete[] str;
	return flag && (counter == 4);
}

int main()
{
	string s = "";
	getline(cin, s);
	cout << (isIPv4(s) ? "YES" : "NO");
	return 0;
}