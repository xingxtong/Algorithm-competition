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

//基于二叉树后序遍历的内存释放
void backfree(pTree);

void initialize()			//initialize(初始化)
{
	for (int i = 0; i < 20; i++)
	{
		check[i] = false;
	}
}

//#endif // FUNC