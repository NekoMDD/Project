#include<iostream>
using namespace std;

//�����ĳ�����ʽ
//1���޲��޷�

void test01()
{
	cout << "this is test01" << endl;
}

//2���в��޷�

void test02(int a)
{
	cout << "this is test02 a=" << a << endl;
}

//3���޲��з�

int test03()
{
	cout << "this is test03" << endl;
	return 1000;
}

//4���в��з�

int test04(int a)
{
	cout << "this is test04 a=" << a << endl;
	return a;
}

int main46()
{

	//�޲��޷��ĺ�������
	test01();

	//�в��޷��ĺ�������
	test02(100);

	//�޲��з��ĺ�������
	int num1 = test03();
	cout << "num1=" << num1 << endl;

	//�в��з��ĺ�������
	int num2 = test04(10000);
	cout << "num2=" << num2 << endl;

	system("pause");

	return 0;
}