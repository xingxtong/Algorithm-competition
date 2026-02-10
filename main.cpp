#include "function.h"

using namespace std;

vector<int> Tree[N];
int id = 1;
int h[N], e[N * 2], p[N * 2];
bool check[N] = { true };



int main()
{
	int i = 0;
	//链式前向星创建的树
	//tree_line();
	//cout << "bfs遍历:" << endl;
	//bfs_line(1);
	//cout << "dfs遍历:" << endl;
	//initialize();
	//dfs_line(1);
	ifstream file("data.txt");//打开名为data.txt的文件
	if (!file.is_open())
	{
		cout << "打不开" << endl;
		return 1;
	}
	//重定向cin
	cin.rdbuf(file.rdbuf());		//修改cin的缓冲区到文件的区域
	tree_line();
	//cout << "dfs:" << endl;
	//dfs_line(1);
	//initialize();
	cout << "bfs:" << endl;
	bfs_line(1);

	//vector数组创建的树
	//tree1();
	//cout << "dfs:" << endl;
	//dfs_vec(1);
	//initialize();
	//cout << endl << "bfs:" << endl;
	//bfs_vec(1);
	//链式前向星创建的树
}