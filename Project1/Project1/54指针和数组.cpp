#include<iostream>
using namespace std;

int main54()
{

	//指针和数组
	//利用指针访问数组中的元素

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;//数组名就是数组的首地址
	//cout << "利用指针访问第一个元素" << *p << endl;
	//p++;//让指针向后便宜四个字节
	//cout << "利用指针访问第二个元素" << *p << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << *p << endl;
		p++;
	}

	system("pause");

	return 0;
}