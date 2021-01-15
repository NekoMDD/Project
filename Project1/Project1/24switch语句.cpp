#include<iostream>
using namespace std;

int main()
{

	//switch (表达式)
	//{
	//	case 结果1：执行语句；break;
	//default:
	//	break;
	//}

	//switch语句
	//给电影进行评分
	// 10~9分 经典
	// 8~7分  非常好
	// 6~5分  一般
	// 5以下  烂片

	//1、提示用户给电影评分

	cout << "请给电影进行评分：" << endl;

	//2、用户开始进行评分

	int score = 0;
	cin >> score;
	cout << "您打的分数为：" << score << endl;

	//3、根据用户输入的分数来提示用户最后结果

	switch (score)
	{
	case 10:
		cout << "您认为是经典电影" << endl;
	case 9:
		cout << "您认为是经典电影" << endl;
	}

	system("pause");

	return 0;
}