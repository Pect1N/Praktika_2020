#include <iostream>
#include "Tree.h"
#include <ctime>

using namespace std;

int main(void)
{
	Tree elem(10); // ������ ����������
	int max = 9; // ����� ���������

	elem.show(9); // ����������� �������

	do
	{
		elem.sort_tree(max);
		--max;
	} while (max > 1);

	elem.show(9);

	return 0;
}