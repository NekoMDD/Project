#include<iostream>
using namespace std;

//定义学生的结构体
struct student
{
	string name;
	int age;
	int score;
};
//打印学生信息的函数
//1、值传递
void printstudent1(struct student s)
{
	cout << "姓名：" << s.name << " 年龄：" << s.age << " 分数：" << s.score << endl;
}
//2、地址传递
void printstudent2(struct student*p)
{
	cout << "地址传递中 姓名：" << p->name << " 年龄：" << p->age << " 分数：" << p->score << endl;
}

int main61()
{

	//结构体做函数参数
	//将学生传入到一个参数中，打印学生身上的所有信息

	//创建结构体变量
	struct student s;
	s.name = "张三";
	s.age = 20;
	s.score = 80;

	printstudent1(s);
	printstudent2(&s);

	system("pause");

	return 0;
}