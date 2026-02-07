#pragma
//#ifndef FUNC
//#define FUNC

#include"head.h"
//队列的函数
void queue1();
//vector数组创建的树
void tree1();
void dfs_vec(int);
void bfs_vec();
//链式前向星创建的树
void tree_line();
void dfs_line(int);
void bfs_line(int);

void initialize()			//initialize(初始化)
{
	for (int i = 0; i < N; i++)
	{
		check[i] = false;
	}
}

//#endif // FUNC