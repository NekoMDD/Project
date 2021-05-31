#include<iostream>
using namespace std;

const double pi = 3.14;//圆周率
//设计一个圆类，求圆的周长
//圆求周长的公式：2πr
//class 代表设计一个类，类后边紧跟着的就是类名称
class Circle
{
	//访问权限
public:      //公公权限
	//属性
	int m_r; //半径
	//行为
	//获取圆的周长
	double clculateZC()
	{
		return 2 * pi * m_r;
	}
};
class Student
{
public:

	string name;
	int num;
	void SC()
	{
		cout << "姓名：" << name << " 学号：" << num << endl;
	}
	//给姓名赋值
	void setname(string name1)
	{
		name = name1;
	}
};


int main1()
{
	//通过圆类创建具体的圆（对象）
	//实例化：通过一个类 创建一个对象的过程
	Circle c1;
	//给圆对象 的属性进行赋值
	c1.m_r = 10;
	
	Student s1;
	s1.name = "张三";
	s1.num = 1;
	s1.SC();
	Student s2;
	s2.setname("李四");
	s2.num = 2;
	s2.SC();

	cout << "圆的周长为：" << c1.clculateZC() << endl;

	system("pause");

	return 0;
}