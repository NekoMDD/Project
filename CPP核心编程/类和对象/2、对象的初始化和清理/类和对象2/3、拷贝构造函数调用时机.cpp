#include<iostream>
using namespace std;

//�������캯������ʱ��

class Person3
{
public:
	Person3()
	{
		cout << "Person��Ĭ�Ϲ��캯������" << endl;
	}
	Person3(int age)
	{
		cout << "Person���вι��캯������" << endl;
		m_Age = age;
	}
	Person3(const Person3& p)
	{
		cout << "Person�Ŀ������캯������" << endl;
		m_Age = p.m_Age;
	}
	~Person3()
	{
		cout << "Person��������������" << endl;
	}
	int m_Age;
};

//1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���

void test013()
{
	Person3 p1(20);
	Person3 p2(p1);

	cout << "p2������Ϊ��" << p2.m_Age << endl;
}

//2��ֵ���ݵķ�ʽ������������ֵ

void doWork(Person3 p)
{

}

void test023()
{
	Person3 p;
	doWork(p);
}

//3��ֵ��ʽ���ؾֲ�����

Person3 doWork01()
{
	Person3 p1;
	cout << (int*)&p1 << endl;
	return p1;
}

void test033()
{
	Person3 p = doWork01();
	cout << (int*)&p << endl;
}

int main3()
{
	//test013();
	//test023();
	test033();

	system("pause");

	return 0;
}