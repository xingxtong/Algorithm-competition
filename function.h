#pragma
//#ifndef FUNC
//#define FUNC

#include"head.h"
//队列的函数
void queue1();
//vector数组创建的树
void tree1();
void dfs_vec(int);
void bfs_vec(int);
//链式前向星创建的树
void tree_line();
void dfs_line(int);
void bfs_line(int);
//基于字符串创建的树
bool createTree(char a[], pTree*);
//基于二叉树的前中后遍历
void preTree(pTree);
void cerTree(pTree);
void backTree(pTree);
//基于二叉树后序遍历的内存释放
void backfree(pTree);
//二叉树的线索化
void xsTree(pTree*);
//线索二叉树的遍历
void pr_xs_Tree(pTree);
//插入排序的函数
void insertion_sort(int a[], int*);
//选择排序的函数
void select_sort(int a[], int*);
//数组的输出
void printarr(int a[], int);


void initialize()			//initialize(初始化)
{
	for (int i = 0; i < 20; i++)
	{
		check[i] = false;
	}
}

//#endif // FUNC