//#include<iostream>
//
//using namespace std;
//
//int erfen(int x,int* x1,int sz)
//{
//	int center,left=0,right=sz-1;
//	while (right>=left)
//	{
//		center = (left + right) / 2;
//		if (x1[center] > x)
//		{
//			right = center - 1;
//		}
//		else if (x1[center] < x)
//		{
//			left = center + 1;
//		}
//		else
//		{
//			return center;
//		}
//		
//	}
//		return -1;
//}
//
//int main()
//{
//	int num;
//	int a[20] = {0};
//	for (int i = 0; i < 20; i++)
//	{
//		a[i] = i*2;
//	}
//	cin >> num;
//	int d = erfen(num, a,20);
//	cout << d << endl;
//	
//	return 0;
//}