#include "function.h"
#include<fstream>
#include<iostream>

using namespace std;

//向量
vector<int> Tree[N];
//链式前向星
int id = 1;
int h[N], e[N * 2], p[N * 2];
bool check[N] = { true };

//测试数组
int number[110] = {0};

int main()
{
	srand(time(NULL));
	clock_t frist=clock();
	ofstream file("data.txt");

	//ofstream file("data.txt", ios::trunc);
	//for (int i = 0; i < 100; i++)
	//{
	//	//
	//	file << rand() % 100000 + 1<<' ';
	//}
	cin.rdbuf(file.rdbuf());
	int num = 0;
	for (int i = 1; i < 101; i++)
	{
		cin >> num;
		number[i] = num;
	}
	num=jianarr(number);
	cout << num;
	file.close();
	clock_t end = clock() - frist;
	cout << end << "ms";
	//srand(time(NULL));		//种一个随机种子
	//int num = jianarr(number);
	//cout << num<<endl;
	//printarr(number, num);
	//插入排序：
	//insertion_sort(number, &number[num]);

	//选择排序
	//select_sort(number, &number[num]);

	//冒泡排序
	//Bubble_sort(number, &number[num]);

	//堆排序
	//heap_sort(number, &number[num]);

	//快速排序
	//quick_sort(number,&number[1], &number[num-1]);

	//归并排序
	//

	//输出函数
	//printarr(number, num);

	//完全二叉树
	//char a[100] = "ABDH##I##E#J##CF##G##";

	//pTree T = (pTree)malloc(sizeof(Treen));
	//createTree(a,&T->lchild);
	//preTree(T->lchild);
	//xsTree(&T);

	//backfree(T->lchild);
	//free(T);

	//重定向cin
	//int i = 0;
	//ifstream file("data.txt");//打开名为data.txt的文件
	//if (!file.is_open())
	//{
	//	cout << "打不开" << endl;
	//	return 1;
	//}
	////重定向cin
	//cin.rdbuf(file.rdbuf());		//修改cin的缓冲区到文件的区域
}