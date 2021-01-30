#include<iostream>
using namespace std;

//冒泡排序函数   参数1  数组首地址  参数2  数组长度
void bubblesort(int *arr,int len)
{
	for (int i = 0; i < len-1; i++)
	{
		for (int j = 0; j < len-i-1; j++)
		{
			//如果J>J+1的值 交换数字
			if (arr[j]>arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}


//打印数组
void printarray(int* arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}
}
int main56()
{

	//1、创建一个数组

	int arr[10] = { 4,3,6,9,1,2,10,8,7,5, };

	//数组长度
	int len = sizeof(arr) / sizeof(arr[0]);

	//2、创建一个函数实现冒泡排序

	bubblesort(arr, len);

	//3、打印排序后的数组

	printarray(arr, len);

	system("pause");

	return 0;
}