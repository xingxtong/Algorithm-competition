#define _CRT_SECURE_NO_WARNINGS 1
#include "function.h"

using namespace std;

//向量
vector<int> Tree[N];
//链式前向星
int id = 1;
int h[N], e[N * 2], p[N * 2];
bool check[N] = { true };

//辅助数组
int fuzhu[N];

//测试数组
int number[100010] = { 0 };

int main()
{
	srand(time(NULL));		//种一个随机种子
	clock_t frist = clock();		//记录时间

	//ofstream file("data.txt",ios::app);
	//ofstream file("data.txt", ios::trunc);
	//for (int i = 0; i < 100000; i++)
	//{
	//	//
	//	file << rand() % 100000 + 1<<' ';
	//}
	//file.close();

	ofstream file("data.txt", ios::app);	//写文件的类型
	ifstream infile("data1.txt");			//读文件的类型

	//重定向scanf
	//freopen("data1.txt", "r", stdin);
	auto old_rdbuf = cin.rdbuf(infile.rdbuf());	//记录之前的cin缓冲区

	//int num = 0;
	//for (int i = 1; i < 51; i++)
	//{
	//	//scanf("%d", &number[i]);
	//	cin >> number[i];
	//}

	char num = 0;
	char arr1[102], arr2[102];
	int i1 = 0, i2 = 1;
	arr1[0] = '0';
	while (arr1[i1] >= '0' && arr1[i1] <= '9')
	{
		i1++;
		cin >> arr1[i1];

	}
	num = 0;
	while (num <= '0' && num >= '9')
	{
		cin >> num;
	}
	arr2[1] = num;
	while (arr2[i2] >= '0' && arr2[i2] <= '9')
	{
		i2++;
		cin >> arr2[i2];
	}
	printa(arr1, i1);
	printa(arr2, i2);


	//插入排序：
	//insertion_sort(number, &number[num]);
	//插入排序排第四

	//选择排序
	//select_sort(number, &number[num]);
	//选择排序排倒二

	//冒泡排序
	//Bubble_sort(number, &number[num]);
	//冒泡最慢

	//堆排序(比快排慢一点)
	//heap_sort(number, &number[num]);
	//和快排不相上下

	//快速排序
	//quick_sort(number,&number[1], &number[num-1]);
	//和堆排序不相上下

	//归并排序
	guibing_sort(number, 1, num - 1);
	//数据不够多，未能看出明显差别

	//输出函数
	printarr(number, num);

	//完全二叉树
	//char a[100] = "ABDH##I##E#J##CF##G##";

	//pTree T = (pTree)malloc(sizeof(Treen));
	//createTree(a,&T->lchild);
	//preTree(T->lchild);
	//xsTree(&T);

	clock_t end = clock() - frist;
	cout << end << "ms";

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