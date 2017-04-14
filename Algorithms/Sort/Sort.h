#pragma once

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>

using namespace std;

#define SIZE 50

class List {
public:
	int list[SIZE];
	int length;
	int size = SIZE;
	List() { length = 0; };
};