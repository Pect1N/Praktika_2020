#pragma once
#include <iostream>
#include <ctime>

using namespace std;

class Tree
{
	int massive[10];
public:
	Tree(int elems)
	{
		for (int i = 0; i < elems; ++i)
		{
			massive[i] = (rand() * time(0)) % 10;
		}
	}

	void show(int max)
	{
		for (int i = 0; i <= max; ++i)
		{
			cout << massive[i] << " ";
		}
		cout << endl;
	}

	int sravnenie(int i, int n)
	{
		int swap = -1;
		if ((massive[i] < massive[2 * i + n]) && ((2 * i + n) <= 10))
		{
			swap = massive[i];
			massive[i] = massive[2 * i + n];
			massive[2 * i + n] = swap;
		}
		return swap;
	}

	void sort_tree(int max)
	{
		int flag = 0;
		do
		{
			flag = 0;
			for (int i = 0; i <= max; ++i)
			{
				if ((2 * i + 1) <= max)
				{
					if (sravnenie(i, 1) != -1)
						flag = 1;
				}
				if ((2 * i + 2) <= max)
				{
					if (sravnenie(i, 2) != -1)
						flag = 1;
				}
			}
		} while (flag == 1);

		int swap = 0;
		swap = massive[0];
		massive[0] = massive[max];
		massive[max] = swap;
	}
};