#include<iostream>
using namespace std;

int main34()
{

	//continue语句
	for (int i = 0; i <= 100; i++)
	{
		//如果是奇数输出，偶数不输出
		if (i % 2 == 0)
		{
			continue;//可以筛选特定条件，执行到此为止
		}
		cout << i << endl;
	}

	system("paues");

	return 0;
}