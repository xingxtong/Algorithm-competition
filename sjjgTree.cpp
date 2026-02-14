#include"head.h"

using namespace std;

//计数
int idd = 0;
pTree backTree = NULL;
//创建
bool createTree(char a[], pTree* T)
{
	if (a[idd] == '#')
	{
		*T = NULL;
		idd++;
		return false;
	}
	else
	{
		(*T) = (Treen*)malloc(sizeof(Treen));
		(*T)->data = a[idd];
		idd++;
		if (createTree(a, &(*T)->lchild))
		{
			(*T)->lef = true;
		}
		if (createTree(a, &(*T)->rchild))
		{
			(*T)->rig = true;
		}

		return true;
	}
}

//前序遍历
void preTree(pTree T)
{
	if (T == NULL)
	{
		return;
	}
	printf("%c ", T->data);
	preTree(T->lchild);
	preTree(T->rchild);
}
//中序遍历
void preTree(pTree T)
{
	if (T == NULL)
	{
		return;
	}
	preTree(T->lchild);
	printf("%c ", T->data);
	preTree(T->rchild);
}
//后序遍历
void preTree(pTree T)
{
	if (T == NULL)
	{
		return;
	}
	preTree(T->lchild);
	preTree(T->rchild);
	printf("%c ", T->data);
}

//二叉树的线索化
void xsTree(pTree T)
{
	if (T == NULL)
	{
		return;
	}
	xsTree(T->lchild);
	xs();
	xsTree(T->rchild);
}

void xs(pTree T)
{

}


//基于后序遍历的内存释放
void backfree(pTree T)
{
	if (T == NULL)
	{
		return;
	}
	backfree(T->lchild);
	backfree(T->rchild);
	free(T);
}