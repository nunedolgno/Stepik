/*
���������� ���������� ���������� ����� ����� ���������� ����������� ������������������ ����������� �����, ������������� ������ 0. ���� � ������������������ ��� ���� ��������� ����������, �������� ����� 0.
��������� � �������� �������� ��� ���� ���������� ����������� �� ���������.
����������� ��������� ���������� �������� ����� ����������. � �������� ������� �������� ������ ����.

������ ������� ������
�������� ������������������ ����� �����, �������������� ������ 0 (���� ����� 0 � ������������������ �� ������, � ������ ��� ������� �� ���������).

������ �������� ������
�������� ����� �� ������.

Sample Input 1:
1
2
1
1
2
1
2
1
0

Sample Output 1:
2

Sample Input 2:
1
2
3
0

Sample Output 2:
0
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, c = 0, l = 0, m = 0;
	std::vector<int> v;

	while (1)
	{
		cin >> n;
		if (n == 0) break;
		v.push_back(n);
	}

	for (int i = 1; i < v.size() - 1; i++)
	{
		if ((v[i] > v[i - 1]) && (v[i] > v[i + 1]))
		{
			if ((l != 0 && l <= m) || (m == 0 && l >= m))
			{
				m = l;
				l = 0;
			}
			c++;
		}
		if (c > 0) l++;
	}

	cout << (c <= 1 ? 0 : m);
	return 0;
}