#include "function.h"

using namespace std;

vector<int> Tree[N];
int id=1;
int h[N], e[N * 2], p[N * 2];
bool check[N];



int main()
{
	int i = 0;
	//链式前向星创建的树
	tree_line();
	cout << "bfs遍历:" << endl;
	bfs_line(1);
	cout << "dfs遍历:" << endl;
	initialize();
	dfs_line(1);

	//vector数组创建的树
	//tree1(Tree);
	//dfs_vec(Tree);
	//bfs_vec(Tree);
	//链式前向星创建的树
}