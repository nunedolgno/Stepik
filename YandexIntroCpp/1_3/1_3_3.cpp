/*
������� � ������ - 1
N ������� ����� K ������� � ������ ��������� �� �������. ����������, ������� ������� ���������� ������ �������.

������ ������� ������
�� ���� ������ ��� ����� ������������� ����� N � K, ������ �� ������� �� ��������� 10000.

������ �������� ������
�������� ���� ����� ����� - ����� �� ������.

Sample Input:
3
14

Sample Output:
4
*/

#include <iostream>
using namespace std;

int main() 
{
	int n, k;
	cin >> n >> k;
	cout << k / n;
	return 0;
}