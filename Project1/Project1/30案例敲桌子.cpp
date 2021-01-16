#include<iostream>
using namespace std;

int main30()
{

	//敲桌子案例
	//1、输出1~100数字
	for (int i = 1; i < 101; i++)
	{
		//2、从100个数字中找到特殊数字，打印“敲桌子”
		//如果是7的倍数或者个位或十位有7，打印敲桌子
		if (i%7==0||i%10==7||i/10==7)
		{
			cout << "敲桌子" << endl;
		}
		else
		{
			cout << i << endl;
		}
	}

	system("pause");

	return 0;
}