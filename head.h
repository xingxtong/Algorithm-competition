#pragma
//#ifndef HHH
//#define HHH

#include<iostream>
#include<vector>

using namespace std;

#define N 1000
#define MAX 100

extern vector<int> Tree[N];				//vector类型的数组，用来存整个树
extern int id;								//表示一个指针，给新来的数据分配空间
extern int h[N], e[N * 2], p[N * 2];		//
//h数组表示哨兵数组，通过该数组进行访问
//e数组属于数值域数组，由于每一对数据都需要相互存两次，所以需要N*2
//p数组存储子节点的数组下标数组（指针域），同样需要N*2

extern bool check[N];				//判断该位置是否遍历过(哈希表)

//都能使用的函数

//初始化check数组


//创建类或结构体
//队列类(大小为100)

class que
{
private:
	int a[MAX];
	int front, back;
public:
	//构造函数
	que() :front(0), back(-1) {}

	//入队操作
	void push(int num)
	{
		back = (back + 1) % MAX;
		if (back != front)
		{
			back = (back + 1) % MAX;
			a[back] = num;
		}
		else
		{
			cout << "数列已满" << endl;
			back = (back + MAX - 1) % MAX;
		}
	}

	//出队操作
	void pop()
	{
		if (front != back)
		{
			front = (front + 1) % MAX;
		}
		else
		{
			cout << "队列为空" << endl;
		}
	}

	//显示队头元素
	int head()
	{
		return a[front];
	}

	//队列大小
	int size()
	{
		return (back + MAX - front + 1) % MAX;
	}

	//判空(为空则返回true)
	bool empty()
	{
		return back == front;
	}

};
