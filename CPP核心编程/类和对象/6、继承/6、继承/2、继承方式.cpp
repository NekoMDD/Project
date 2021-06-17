#include<iostream>
using namespace std;

//继承方式
//公共继承
class Base12
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son12 :public Base12//公共继承
{
public:
	void func()
	{
		m_A = 10;//父类中的公共权限成员 到子类中依然是公共权限
		m_B = 10;//父类中的保护权限成员 到子类中依然是保护权限
		//m_C = 10;//父类中的私有权限成员 子类访问不到
	}
};

void test012()
{
	Son12 s1;
	s1.m_A = 100;
	//s1.m_B = 100;//到son1中m_B是保护权限 类外访问不大哦
}

//保护继承
class Base22
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son22 :protected Base22
{
public:
	void func()
	{
		m_A = 100;//父类中公共成员，到子类中变为保护权限
		m_B = 100;//父类中保护成员，到子类中依旧是保护权限
		//m_C = 100;//子类访问不到私有成员
	}
};

void test022()
{
	Son22 s1;
	//s1.m_A = 100;//在Son2中m_A变为保护权限，因此类外访问不到
}

class Base32
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son32 :private Base32
{
public:
	void func()
	{
		m_A = 100;//父类中公共成员到子类中变为私有成员
		m_B = 100;//父类中保护成员到子类中变为私有成员
		//m_C = 100;
	}
};

void test032()
{
	Son32 s1;
	//s1.m_A = 1000;//到Son3中，变为私有成员，访问不到
}

int main2()
{

	system("pause");

	return 0;
}