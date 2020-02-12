/*
���� ������������������ ����������� ����� x1, x2, ..., xn. ����������� ����������� ���������� ��������

���- ������� �������� ������������������.

���������� ����������� ���������� ��� ������ ������������������ ����������� �����, ������������� ������ 0.

������ ������� ������
�������� ������������������ ����������� �����, �������������� ������ 0 (���� ����� 0 � ������������������ �� ������, � ������ ��� ������� �� ���������). � ������������������ �� ����� ���� ����� �� 0.

������ �������� ������
�������� ����� �� ������.

Sample Input:
1
7
9
0

Sample Output:
4.16333199893
*/

#include <iostream>
#include <vector>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
	int n;
	double s = 0, r = 0;
	vector<int> v;
	while (1)
	{
		cin >> n;
		if (n == 0) break;
		v.push_back(n);
	}

	for (size_t i = 0; i < v.size(); i++)
	{
		s += v[i];
	}

	s = s / v.size();

	for (size_t i = 0; i < v.size(); i++)
	{
		r += (v[i] - s) * (v[i] - s);
	}

	r = sqrt(r / (v.size() - 1));

	cout << setprecision(12);
	cout << r;
	return 0;
}