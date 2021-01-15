#include<iostream>
using namespace std;

int main21()
{

	//1、提示输入分数
	int score = 0;
	cout << "请输入考试分数" << endl;
	cin >> score;

	//2、显示分数
	cout << "您的考试分数为：" << score << endl;

	//3、判断
	if (score > 600)
	{
		cout << "恭喜您考上了一本大学" << endl;
		if (score > 700)
		{
			cout << "您能考入北京大学" << endl;
		}
		else if (score > 650)
		{
			cout << "您能考上清华大学" << endl;
		}
		else
		{
			cout << "您能考上人民大学" << endl;
		}
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
		cout << "恭喜您考上了家里蹲大学！菜！" << endl;
	}

	system("pause");

	return 0;
}