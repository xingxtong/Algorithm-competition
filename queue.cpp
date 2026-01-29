#include<queue>
#include<iostream>

using namespace std;

void queue1()
{
	//创建队列
	queue<int> lei;
	lei.push(19);	//入队
	lei.push(10);
	lei.push(100);
	lei.push(2321);
	lei.pop();		//出队
	cout << lei.front() << endl;	//返回队头元素
	cout << lei.back() << endl;		//返回队尾元素
	cout << lei.size() << endl;		//队列的有效数据个数
	cout << lei.empty() << endl;	//判空
}


//队列类(大小为100)
class que
{
private:
#define MAX 100
	int a[MAX];
	int front, back;
public:

	//构造函数
	que() :front(0), back(-1){}

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