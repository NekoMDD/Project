#include<iostream>
using namespace std;

int main19()
{

	////选择结构 单行if语句
	////用户输入分数，如果分数大于600，视为考上一本大学，在屏幕上输出

	////1、用户输入分数
	//int score = 0;
	//cout << "请输入分数" << endl;
	//cin >> score;

	////2、打印用户输入的分数
	//cout << "您输入的分数为：" << score << endl;

	////3、判断分数是否大于600，如果大于，那么输出
	////注意事项：if条件后不要加分号
	//if (score > 600)
	//{
	//	cout << "恭喜您考上了一本大学" << endl;
	//}

	//选择结构 多行if语句
	//输入考试分数，如果分数大于600，视为考上一本大学，在屏幕上输出，如果没考上一本，则打印未考上一本大学
	int score = 0;
	cout << "请输入分数" << endl;
	cin >> score;
	cout << "您输入的分数为：" << score << endl;
	if (score > 600)
	{
		cout << "恭喜您考上了一本大学" << endl;
	}
	else
	{
		cout << "很遗憾，您未考上一本大学" << endl;
	}

	system("pause");

	return 0;
}