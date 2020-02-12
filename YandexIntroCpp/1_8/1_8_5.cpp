﻿/*
Дано число n, не превышающее 100. Создайте массив размером n×n и заполните его по следующему правилу. На главной диагонали должны быть записаны числа 0. На двух диагоналях, прилегающих к главной, числа 1. На следующих двух диагоналях числа 2, и т.д. Выведите полученный массив на экран, разделяя элементы массива пробелами.

Sample Input:
5

Sample Output:
0 1 2 3 4
1 0 1 2 3
2 1 0 1 2
3 2 1 0 1
4 3 2 1 0
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n;
	int a[100][100];

	cin >> n;

	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			cout << abs((int)(i - j)) << " ";
		}
		cout << endl;
	}
	return 0;
}