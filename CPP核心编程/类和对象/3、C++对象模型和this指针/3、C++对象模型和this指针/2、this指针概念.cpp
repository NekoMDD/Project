#include<iostream>
using namespace std;

class Person
{
public:
	Person(int age)
	{
		age = 10;
	}
	int age;
};

//1��������Ƴ�ͻ
void test01()
{
	Person p1(18);
	cout << "p1������Ϊ��" << p1.age << endl;
}
//2�����ض�������*this

int main()
{

	system("pause");

	return 0;
}