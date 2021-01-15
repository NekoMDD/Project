#include<iostream>
using namespace std;

int main25()
{

	//while循环
	//在屏幕中打印0~9这10个数字
	int num = 0;

	//注意事项：在写循环的时候一定要避免死循环的出现
	while (num<10)//()中为判断条件
	{
		cout << num << endl;
		num++;
	}

	system("pause");

	return 0;
}