/*
�� ������� ������ ����� N ������������ ��� �������� ����������� �����, �� ������������� N, � ������� �����������.

������ ������� ������
�������� ����������� �����.

������ �������� ������
�������� ����� �� ������.

Sample Input:
50

Sample Output:
1 4 9 16 25 36 49
*/

#include <iostream>
using namespace std;

int main() 
{
	int n, i;
	i = 1;
	cin >> n;

	while (i*i <= n)
	{
		cout << i*i << " ";
		i++;
	}

	return 0;
}