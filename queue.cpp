#include<queue>
#include"head.h"

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

