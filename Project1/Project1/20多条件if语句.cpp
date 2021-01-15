#include<iostream>
using namespace std;

int main20()
{

	//选择结构 多条件if语句
	//输入一个考试分数，如果大于600视为考上一本
	//大于500分视为考上二本大学
	//大于400分视为考上三本大学
	//小于等于400分视为未考上本科
	
	//1、用户输入分数
	int score = 0;
	cout << "请输入考试分数" << endl;
	cin >> score;
	//2、打印分数
	cout << "您输入的分数为：" << score << endl;
	//3、判断
	if (score > 600)
	{
		cout << "恭喜您考上一本大学" << endl;
	}
	else if (score > 500)
	{
		cout << "恭喜您考上了二本大学" << endl;
	}
	else if (score > 400)
	{
		cout << "恭喜您考上了三本大学" << endl;
	}
	else
	{
		cout << "很遗憾，您未考上本科大学" << endl;
	}

	system("pause");

	return 0;
}