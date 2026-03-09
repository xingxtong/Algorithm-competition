#include"head.h"

typedef char typ;


//输出数组
void printa(typ arr[], int num)
{
	for (int i = 1; i <= num; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;
}



//数组从下标1开始
//高精度加法
void gaoadd(char arr1[], char arr2[], char* ia, char* ib)
{
	char* id = NULL;

	//char* jian[2] = {ia,ib};
	//看哪个数字比较大
	if (ia - arr1 >= ib - arr2)
	{
		id = ia;
		//从两个数字的个位开始相加到较长数字的数组里
		while (ib > arr2)
		{
			*ia = *ia + *ib - '0';
			//进位
			for (char* check = ia; *check > '9' && check > arr1; check--)
			{
				*(check - 1) += 1;
				*check -= 10;
			}
			ia--;
			ib--;
		}
		printa(arr1, id - arr1);
	}
	else
	{
		id = ib;
		while (ia > arr1)
		{
			*ib = *ia + *ib - '0';
			//进位
			for (char* check = ib; *check > '9' && check > arr2; check--)
			{
				*(check - 1) += 1;
				*check -= 10;
			}
			ia--;
			ib--;
		}
		printa(arr2, id - arr2);
	}
}