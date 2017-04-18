#include "Sort.h"
#include "Bubbling.h"

List::List()
{
	length = 0;
	list = (int *)malloc(sizeof(int)* SIZE);
	size = SIZE;
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

int main() {
	srand((unsigned)time(NULL));
	List *list = new List();
	for (int i = 0; i < 50; ++i)
	{
		list->insert(rand() % 900 + 100);
	}
	list->print();
	bubbling(list);
	list->print();
	return 0;
}