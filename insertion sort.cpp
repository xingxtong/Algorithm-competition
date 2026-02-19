#include"head.h"

//声明输出函数
void printarr(int a[], int);

//默认升序
//第一个为数组指针，第二个为数组大小
//从第二个数字开始依次选中数字，与前方的有序数列的数对比
//一旦比某一个数字大，就与它后面的数交换位置
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
		printarr(a, num - a);
	}
}

//选择排序
//从整个数列中选出最小的数，放在有序序列的最后面
//有序序列在数组的前面
void select_sort(int a[], int* num)
{
	int number = 0;
	int* select = NULL;
	for (int* i = a + 1; i < num; i++)
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
		printarr(a, num - a);
	}
}

//冒泡排序
//数组的第一个开始，依次与后一个相比
//如果比后一个大，就交换位置
//在排序过程中会出现已经排好但还在运行的情况，
//可以基于此情况添加一个标记
void Bubble_sort(int a[], int* num)
{
	int cun = 0;
	bool check = false;
	for (int* i = num - 1; a < i; i--)
	{
		check = false;
		for (int* j = a; j < i; j++)
		{
			if (*j > *(j + 1))
			{
				cun = *j;
				*j = *(j + 1);
				*(j + 1) = cun;
				check = true;	//如果执行了交换，说明还没有排序完成
			}
		}
		//如果没有执行交换操作，check就是false，则说明排序已经完成，直接退出程序即可
		if (!check)
		{
			return;
		}
		printarr(a, num - a);
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

//检测函数
//检测某个数组从第二个元素开始，直到第一次遇到0，中间有多少个元素
int jianarr(int a[])
{
	int* p = a + 1;
	for (; *p != 0; p++)
	{
	}
	return p - a;
}