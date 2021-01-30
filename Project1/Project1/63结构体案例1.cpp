#include<iostream>
using namespace std;

//学生的结构体
struct Student
{
	string sName;//学生姓名
	int score;//学生分数
};

//老师的结构体定义
struct Teacher
{
	string tName;//姓名
	struct Student sArray[5];//学生数组
};

//给老师和学生赋值的函数
void allocatespace(struct Teacher tArray[],int len)
{
	//给老师开始赋值
	string naneseed = "ABCDE";
	for (int i = 0; i < len; i++)
	{
		tArray[i].tName = "Teacher_";
		tArray[i].tName += naneseed[i];
		//通过循环给每名老师所带的学生赋值
		for (int j = 0; j < 5; j++)
		{
			tArray[i].sArray[j].sName = "Student_";
			tArray[i].sArray[j].sName += naneseed[j];
			int random = rand() % 61 + 40;//0~60分,+40代表40~100之间
			tArray[i].sArray[j].score = random;
		}
		
	}
}
//打印所有信息
void printinfo(struct Teacher tArray[],int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "老师姓名：" << tArray[i].tName << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\t学生姓名：" << tArray[i].sArray[j].sName << " 考试分数：" << tArray[i].sArray[j].score << endl;
		}
	}
}

int main63()
{

	//随机数种子
	srand((unsigned)time(NULL));

	//1、创建三名老师的数组
	struct Teacher tArray[3];

	//2、通过函数给三名老师的信息赋值，并且给老师带的学生信息赋值
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocatespace(tArray, len);

	//3、打印所有老师及所带学生的信息
	printinfo(tArray,len);


	system("pause");

	return 0;
}