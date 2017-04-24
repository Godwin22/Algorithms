#include "List.h"
#include "Sort.h"

List::List():length(0), size(SIZE), list((int *)malloc(sizeof(int)* SIZE))
{
}
void List::insert(int data)
{
	if (length < size)
		list[length++] = data;
	else
	{
		list = (int *)realloc(list, sizeof(int)* SIZE);
		list[length++] = data;
		size += SIZE;
	}
}
void List::print()
{
	for (int i = 0; i < length; ++i)
	{
		cout << list[i] << " ";
		if ((i + 1) % 10 == 0)
		{
			cout << endl;
		}
	}
	cout << endl;
}