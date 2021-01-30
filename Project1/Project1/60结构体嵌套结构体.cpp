#include<iostream>
using namespace std;

//定义学生结构体
struct student
{
	string name;//姓名
	int age;//年龄
	int score;//分数
};

//定义老师结构体
struct teacher
{
	int id;//编号
	string name;//教师姓名
	int age;//年龄
	struct student stu;//辅导的学生
};

int main60()
{

	//结构体嵌套结构体
	//创建老师
	teacher t;
	t.id = 1000;
	t.name = "王老师";
	t.age = 45;
	t.stu.name = "张三";
	t.stu.age = 18;
	t.stu.score = 60;

	cout << "老师姓名" << t.name << " 职工编号：" << t.id
		<< " 年龄：" << t.age << " 老师辅导的学生姓名：" 
		<< t.stu.name << " 学生的年龄：" << t.stu.age 
		<< " 学生的分数：" << t.stu.score << endl;

	system("pause");

	return 0;
}