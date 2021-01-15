#include<iostream>
using namespace std;

int main26()
{
	//添加随机数的种子，利用当前系统时间生成随机数，放置每次随机数都一样
	srand((unsigned int)time(NULL));

	//1、生成随机数
	int num = rand() % 100 + 1;  //rand()%100 会生成0~99的随机数
	
	//2、玩家进行猜测
	int val = 0;//玩家输入的数据

	while (1)
	{
		cin >> val;
		if (val > num)
		{
			cout << "输入结果过大" << endl;
		}
		else if (val < num)
		{
			cout << "输入结果过小" << endl;
		}
		else
		{
			cout << "输入正确！" << endl;
			break;//break在循环中可以利用该关键字退出当前循环
		}
	}


	//3、判断玩家的猜测

	system("pause");

	return 0;
}