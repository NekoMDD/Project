#include<iostream>
using namespace std;

int main36()
{

	//数组

	//1、数据类型  数组名[数组长度]；
	//数组元素的下标是从零开始索引的

	//int arr[5];
	//arr[0] = 10;
	//arr[1] = 20;
	//arr[2] = 30;
	//arr[3] = 40;
	//arr[4] = 50;
	////访问数组元素
	//cout << arr[3] << endl;

	//2、数据类型  数组名[数组长度] = { 值1，值2... }

	//int arr2[5] = { 10,20,30,40,50 };//如果初始时未定义全部数据，则剩余数据系统自动补零
	//
	//for (int i = 0; i < 5; i++)
	//{
	//	cout << arr2[i] << endl;
	//}

	//3、数据类型  数组名[] = {值1，值2...}
	//定义数组的时候，必须要有初始长度

	int arr3[] = { 90,80,70,60,50,40,30,20,10 };

	for (int i = 0; i < 9; i++)
	{
		cout << arr3[i] << endl;
	}

	system("pause");

	return 0;
}