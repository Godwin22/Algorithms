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

int main() {

	return 0;
}