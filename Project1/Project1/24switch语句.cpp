#include<iostream>
using namespace std;

int main24()
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

	switch (score)//switch的表达式只能是整型或者字符型
	{
	case 10:
		cout << "您认为是经典电影" << endl;
		break;//退出当前分支
	case 9:
		cout << "您认为是经典电影" << endl;
		break;
	case 8:
		cout << "您认为电影非常好" << endl;
		break;
	case 7:
		cout << "您认为电影非常好" << endl;
		break;
	case 6:
		cout << "您认为电影一般" << endl;
		break;
	case 5:
		cout << "您认为电影一般" << endl;
		break;
	default:
		cout << "您认为是烂片" << endl;
		break;
	}

	//switch缺点，判断时候只能是整型或者字符型，不能判断区间
	//switch有点，结构清晰，执行效率高

	system("pause");

	return 0;
}