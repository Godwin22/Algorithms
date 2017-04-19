#include "MultiThreading.h"

unsigned int WINAPI beginThreadFun(LPVOID p)
{
	printf("thread CurrentThreadID:%d\n", GetCurrentThreadId());
	return 0;
}

DWORD WINAPI createThreadFun(LPVOID p)
{
	printf("thread CurrentThreadID:%d\n", GetCurrentThreadId());
	return 0;
}

int main()
{
	HANDLE beginHandle = (HANDLE)_beginthreadex(NULL, 0, beginThreadFun, NULL, 0, NULL);
	WaitForMultipleObjects(1, &beginHandle, TRUE, INFINITE);
	HANDLE createHandle = CreateThread(NULL, 0, createThreadFun, NULL, 0, NULL);
	WaitForSingleObject(createHandle, INFINITE);
	printf("main CurrentThreadID:%d\n", GetCurrentThreadId());
	return 0;
}