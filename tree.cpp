#include"head.h"

//孩子表示法就是把每个节点的孩子信息存下来
//对于无根树来说，父子关系不明确，就得把所有与该节点相连的所有节点存下来

//vector的尾插效率还可以，树这种一对多的结构用尾插来存
//此时就要创建vector类型的数组 如下：

//创建一个内部队列
que duilie;

//树的孩子表示法(vector数组实现)
void tree1()
{
	int n;
	cin >> n;				//获取几条边
	int a, b;
	for (int i = 1; i < n; i++)
	{
		//由于存的是无根树，就要把每个结点之间的逻辑关系都存下来，
		cin >> a >> b;
		// a 和b之间有⼀条边
		Tree[a].push_back(b);		//存下来a与b相连
		Tree[b].push_back(a);		//存下来b与a相连
	}
}

//vector数组的深度优先遍历
void dfs_vec(int p)
{
	cout << p<<' ';
	for (int i = Tree[p].size()-1; i >0 ; i--)
	{
		if (!check[p])
		{
			check[p] = true;
			dfs_vec(Tree[p][i]);
		}
	}
}

//vector数组的广度优先遍历
void bfs_vec(int num)
{
	cout << num<<' ';
	for (int i = Tree[num].size()-1; i > 0; i--)
	{
		duilie.push(Tree[num][i]);
	}
	for(int i=duilie.size()-1;i>0;i++)
	{ 
		bfs_vec(duilie.head());
	}
	
}

//链式前向星添加数据
void add_line(int a, int b)
{
	id++;
	e[id] = b;
	p[id] = h[a];
	h[a] = id;
}

//树的链式前向星存储
void tree_line()
{
	int n;
	cin >> n;
	int a, b;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		add_line(a, b);
		add_line(b, a);
	}
}

//链式前向星的深度优先遍历
void dfs_line() 
{

}

//链式前向星的广度优先遍历
void bfs_line()
{

}