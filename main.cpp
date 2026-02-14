#include "function.h"

using namespace std;

//向量
vector<int> Tree[N];
//链式前向星
int id = 1;
int h[N], e[N * 2], p[N * 2];
bool check[N] = { true };


int main()
{
	//完全二叉树
	char a[100] = "ABDH##I##E#J##CF##G##";

	pTree T = (pTree)malloc(sizeof(Treen));
	createTree(a,&T->lchild);
	preTree(T->lchild);
	backfree(T->lchild);
	free(T);
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