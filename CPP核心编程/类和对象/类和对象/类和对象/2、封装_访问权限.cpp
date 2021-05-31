#include<iostream>
using namespace std;

//访问权限
//公公权限 public     成员类内可以访问，类外也可以访问
//保护权限 protected  成员类内可以访问，类外不可以访问 子类也可以访问父类中的保护内容
//私有权限 private    成员内类可以访问，类外不可以访问 子类不可以访问父类中的保护内容
class Person1
{
	//公公权限
public:
	string m_Name;
	//保护权限
protected:
	string m_Car;
	//私有权限
private:
	int m_Password;
public:
	void func()
	{
		m_Name = "张三";
		m_Car = "拖拉机";
		m_Password = 123456;
	}
};

int main2()
{
	Person1 p1;
	p1.m_Name = "李四";
	//p1.m_Car = "奔驰";//保护权限的内容在类外访问不到
	//p1.m_Password = 123;//私有权限内容在类外访问不到

	p1.func();

	system("pause");

	return 0;
}