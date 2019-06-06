﻿// Laboratory work №8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <list>
using std::cin;
using std::cout;

int main()
{
	int n;
	cin >> n;

	std::list<int> l(n);
	for (auto &i : l)
	{
		cin >> i;
	}

	int sum = 0, k = 0;
	for (const auto i : l)
	{
		if (i % 4 == 0)
		{
			sum += i;
			k++;
		}
	}

	cout << double(sum / k);
	return 0;
}