#include<iostream>
using namespace std;

//成员属性设置为私有
//1、可以自己控制读写权限
//2、对于写可以检测数据的有效性

class Person
{
public:
	//设置姓名
	void setName(string name)
	{
		m_Name = name;
	}
	//获取姓名
	string getNmame()
	{
		return m_Name;
	}
	//设置年龄
	void setAge(int age)
	{
		if (age<0||age>150)
		{
			m_Age = 0;
			cout << "你这个老妖精" << endl;
			return;
		}
		m_Age = age;
	}
	//获取年龄
	int getAge()
	{
		return m_Age;
	}
	//设置情人
	void setLover(string lover)
	{
		m_Lover = lover;
	}
private:
	//姓名
	string m_Name;
	//年龄
	int m_Age;
	//情人
	string m_Lover;
};
int main4()
{
	Person p;
	p.setName("张三");
	cout << "姓名：" << p.getNmame() << endl;
	p.setAge(18);
	cout << "年龄：" << p.getAge() << endl;
	p.setLover("苍井");

	system("pause");

	return 0;
}