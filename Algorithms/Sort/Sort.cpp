#include "Sort.h"
#include "Bubbling.h"

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