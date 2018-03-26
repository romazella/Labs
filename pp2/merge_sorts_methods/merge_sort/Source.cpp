#include "stdafx.h"
namespace SortingMethods
{
	int N; // number of elemnts for sorting
	int MIN_ELEMENT;// make diapazon for generation
	int MAX_ELEMENT; // max random generation

	void ChoosingMethod(const int method)
	{
		switch (method)
		{
		case 1:
		{
			Simple_merge_sort();
			break;
		}
		case 2:
		{
			Natural_merge_sort();
			break;
		}
		default: return;
		}
	}

	void Generation()
	{
		srand(time(NULL));
		ofstream original("Input.txt");
		ofstream info("generated.txt");
		int temp;
		for (int i = 0; i < N; i++)
		{
			temp = MIN_ELEMENT + rand() % (MAX_ELEMENT - MIN_ELEMENT);
			original << temp << " ";
			info << temp << " ";
		}
		original.close();
		info.close();
	}
}