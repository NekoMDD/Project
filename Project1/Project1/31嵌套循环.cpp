#include<iostream>
using namespace std;

int main31()
{

	//利用嵌套循环实现星图
	//打印一行星图
	//外层执行一次，内层执行一周

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}

	system("pause");

	return 0;
}