#include"head.h"

using namespace std;

//记录前驱
pTree frontT1 = NULL;
//记录后继
pTree BackT2 = NULL;
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
void PreTree(pTree T)
{
	if (T == NULL)
	{
		return;
	}
	printf("%c ", T->data);
	PreTree(T->lchild);
	PreTree(T->rchild);
}
//中序遍历
void CerTree(pTree T)
{
	if (T == NULL)
	{
		return;
	}
	CerTree(T->lchild);
	printf("%c ", T->data);
	CerTree(T->rchild);
}
//后序遍历
void BackTree(pTree T)
{
	if (T == NULL)
	{
		return;
	}
	BackTree(T->lchild);
	BackTree(T->rchild);
	printf("%c ", T->data);
}

//二叉树线索化函数封装
//void xsTree(pTree* T)
//{
//	xsTree(*T);
//
//}

//二叉树的线索化
//void xsTree(pTree T)
//{
//	if (T == NULL)
//	{
//		return;
//	}
//	xsTree(T->lchild);
//	xs();
//	xsTree(T->rchild);
//}

//void xs(pTree T)
//{
//
//}

//基于线索二叉树的遍历
//void pr_xs_Tree(pTree T)
//{
//	pr_xs_Tree(T->)
//}


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