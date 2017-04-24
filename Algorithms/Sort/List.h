#pragma once

class List {
public:
	int *list;
	int length;
	int size;
public:
	List();
	void insert(int data);
	void print();
};
