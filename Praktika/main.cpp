#include <iostream>
#include "Tree.h"
#include <ctime>

using namespace std;

int main(void)
{
	Tree elem(10); // объект сортировки
	int max = 10; // число элементов

	elem.show(9); // отображение массива

	do
	{
		--max;
		elem.sort_tree(max);
	} while (max > 1);

	elem.show(9);

	return 0;
}