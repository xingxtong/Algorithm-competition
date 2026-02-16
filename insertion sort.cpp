#include"head.h"

//默认升序
//第一个为数组指针，第二个为数组大小
void insertion_sort(int a[], int* num)
{
	int key = 0;
	//从下标为1开始，1处默认有序，所以i从2开始
	for (int* i = a + 2; i < num; i++)
	{
		key = *i;
		int* j = i - 1;
		while (key < *j && j > a)
		{
			*(j + 1) = *j;
			j--;
		}
		*(j + 1) = key;
	}
}

//选择排序
void select_sort(int a[], int* num)
{
	int number = 0;
	int* select = NULL;
	for (int* i = a+1; i < num; i++)
	{
		select = i;
		for (int* j = i; j < num; j++)
		{
			if (*j < *select)
			{
				select = j;
			}
		}
		number = *select;
		*select = *i;
		*i = number;
	}
}

//输出整个数组的函数
void printarr(int a[], int num)
{
	for (int i = 1; i < num; i++)
	{
		cout << a[i] << ' ';
	}
	cout << endl;
}