#include"head.h"

//辅助数组
int fuzhu[100];
//声明输出函数
void printarr(int a[], int);

//交换函数
void swap(int& a, int& b)
{
	int d = a;
	a = b;
	b = d;
}

//插入排序

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
	}
}

//建堆
void dui(int a[], int x, int len)
{
	int child = x * 2;
	//for (int numb = (num - a) / 2 - 1; numb > -1; numb--)
	int len1 = len + 1;
	while (child < len1)
	{
		if (child + 1 < len1 && a[child] < a[child + 1])
		{
			child++;
		}
		if (a[x] > a[child])return;
		swap(a[child], a[x]);
		x = child;
		child = x * 2;
	}
}

//堆排序

//堆：堆就是一个完全二叉树
//有大根堆和小根堆的说法，大根堆：树的父节点比两个子节点都大
//所以第一步就是建堆(一般建大根堆)
//建成堆后先把堆顶和数组末尾交换
//再进行建堆，由于我们的树本来就是一个大根堆
//我们只需把当前的堆顶依次与其子节点对比交换，该元素会到堆底，而此前第二大的元素会到堆顶
//再把堆顶放到有序序列的前面
void heap_sort(int a[], int* num)
{
	int numb = num - a - 1;
	int key = 0;
	//1.先建堆
	for (int i = numb / 2; i > 0; i--)
	{
		dui(a, i, numb);
	}
	//2.排序，再建堆
	for (numb--; numb > 0; numb--)
	{
		//把堆顶和末尾交换
		swap(a[1], a[numb + 1]);
		//把最后一个排除再建堆
		dui(a, 1, numb);
	}
}

//取数组的第一个值
int frist_element(int a[], int* n)
{
	return 0;
}

//取一个随机值
int randnum(int frist, int end)
{
	int num = rand() % (end - frist) + frist;
	return num;
}

//快速排序

//快排需要选一个基准值
//而基准值一般有三个方法：选第一个(这里默认)，选随机值，选头、中、尾三个元素的中间值
//此次我们的快排三种方法都会使用，并使用缺省加回调函数的方式

//快排原理：
//先选一个基准值(基准值可以是第一个，最后一个，随机一个，头、中、末三个数的中位数)
//根据基准值，把数组分为三部分，第一部分是比基准值小的，第二部分是等于基准值的，第三部分是大于基准值的
//然后再把第一部分和第三部分进行递归，再细分
//在分的数组比较小的时候可以使用插入排序进行优化，在这里当数组小于15个元素的时候，使用插入排序
void quick_sort(int a[], int* frist, int* num)
{
	if (!(frist - num))
	{
		return;
	}
	else if (num - a < 15)
	{
		insertion_sort(a, num);
		return;
	}
	int key = a[randnum(frist - a, num - a)];
	int* i = frist;
	int* f1 = frist;
	int* end = num;
	while (i < num && end >= i)
	{
		if (*i < key)
		{
			swap(*f1, *i);
			i++;
			f1++;
		}
		else if (*i == key)
		{
			i++;
		}
		else
		{
			swap(*i, *end);
			end--;
		}
	}
	//小于基准值的那部分
	quick_sort(a, frist, f1);
	//大于基准值的那部分
	quick_sort(a, end, num);
}

//归并排序

//归并原理：
//把数组直接从中间分开
//左右两边分别递归
//然后再通过辅助数组合并数组
//最后把辅助数组拷贝到原数组
void guibing_sort(int a[], int frist, int end)
{
	if (frist >= end)
		return;
	//else if (frist + 1 == end)
	//{
	//	if (a[frist] > a[end])
	//	{
	//		swap(a[frist], a[end]);
	//	}
	//	return;
	//}
	//1.把数组分成两个
	int center = (end - frist) / 2+frist;
	//2.进行排序(左右两个进行排序)
	guibing_sort(a, frist, center);
	guibing_sort(a, center + 1, end);
	//3.排序好之后就合并数组
	//先把排序好的两半数组，合并到辅助数组里
	int left = frist, i = 1, right = center+1;

	while (left <= center && right <= end)
	{
		if (a[left] < a[right])
		{
			fuzhu[i++] = a[left++];
		}
		else
		{
			fuzhu[i++] = a[right++];
		}
	}
	//排序剩余的数
	while (left <= center)
	{
		fuzhu[i++] = a[left++];
	}
	while (right <= end)
	{
		fuzhu[i++] = a[right++];
	}
	//把辅助数组的数拷贝至原数组
	i = 1;
	while (frist <= end)
	{
		a[frist++] = fuzhu[i++];
	}
}

//输出整个数组的函数
void printarr(int a[], int num)
{
	for (int i = 1; i < num; i++)
	{
		cout << a[i] << ' ';
	}
	cout << endl << endl;
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