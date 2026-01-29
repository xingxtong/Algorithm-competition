//#include<iostream>
//#include<string>
//#include<cstdio>
//
//
//using namespace std;

//int main()
//{
//    printf("\a");
//	return 0;
//}

//int main()
//{
//	vector<int> x1();		//创建一个可变长叔祖
//	vector<int> x2(N);		//创建一个大小为10的可变长数组，值默认为0
//	vector<int> x3(N, 10);	//创建一个大小为10的可变长数组，并且全部初始化为10
//	vector<int> x4 = { 1,2,3,4,5,6,56 };	//初始化列表的创建方式 
//
//	//<>尖括号里可以存放任意类型的数据类型，这里体现了模板的作用
//	
//	//目前有两个方法：size()和empty()
//	//分别是获取数组有效数据的长度，检查数组是否为空
//
//	//如果某个类型有迭代器，就可以使用范围for
//	//vector里也是有迭代器的，类型为vector::iterator 
//	
//	//push_back()尾部添加
//	//pop_back()尾部删除
//
//	//front()返回首元素
//	//back()返回尾部元素
//	return 0;
//}

//#define NUM 100
//
//int a[NUM] = { 0,1,2,3,4,5,6 };
//int n = 6;
//
//void show_arr()
//{
//	for (int i = 1; i <= n; i++)
//	{
//		cout << a[i];
//	}
//	cout << endl;
//}
//
//
////头删
//void pop_front()
//{
//	for (int i = 1; i < n;i++)
//	{
//		a[i] = a[i+1];
//	}
//	n--;
//}
////任意位置删除(位置)
//void pop(int a1)
//{
//	for (int i = a1; i < n; i++)
//	{
//		a[i] = a[i + 1];
//	}
//	n--;
//	show_arr();
//}
////按值查找
//int find(int x)
//{
//	for(int i=1;i<=n;i++)
//	{ 
//		if (x == a[i])
//		{
//			return i;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	pop_front();
//	show_arr();
//	cout << find(10) << endl;
//	cout << find(3) << endl;
//	return 0;
//}