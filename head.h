#pragma once
#include<iostream>
#include<vector>

using namespace std;

#define N 1000

vector<int> Tree[N];		//vector类型的数组，用来存整个树
int id;						//表示一个指针，给新来的数据分配空间
int h[N], e[N * 2], p[N * 2];		
//h数组表示哨兵数组，通过该数组进行访问
//e数组属于数值域数组，由于每一对数据都需要相互存两次，所以需要N*2
//p数组存储子节点的数组下标数组（指针域），同样需要N*2

bool check[N];				//判断该位置是否遍历过(哈希表)

//都能使用的函数

//初始化check数组
void initialize()		//initialize(初始化)
{
	for (int i = 0; i < N; i++)
	{
		check[i] = false;
	}
}

//创建类或结构体
class que;