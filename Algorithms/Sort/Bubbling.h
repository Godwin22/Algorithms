#pragma once

#include "Sort.h"

using namespace std;

void bubbling(List *list)
{
	if (list->length == 0)
		return;
	for(int i = 0; i < list->length-2; i++)
		for (int j = 0; j < list->length - i - 1; j++)
		{
			if (list->list[j] > list->list[j + 1])
			{
				int temp = list->list[j];
				list->list[j] = list->list[j + 1];
				list->list[j + 1] = temp;
			}
		}
}