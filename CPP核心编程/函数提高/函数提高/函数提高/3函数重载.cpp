#include<iostream>
using namespace std;

//��������
//�����ú�������ͬ����߸�����

//�������ص���������
//1��ͬһ����������
//2������������ͬ
//3�������������Ͳ�ͬ�����߸�����ͬ������˳��ͬ
void func()
{
	cout << "func �ĵ���" << endl;
}

void func(int a)
{
	cout << "func(int a) �ĵ���" << endl;
}

void func(double a)
{
	cout << "func(double a) �ĵ���" << endl;
}
void func(int a,double b)
{
	cout << "func(double a1) �ĵ���" << endl;
}

void func(double a,int b)
{
	cout << "func(double a2) �ĵ���" << endl;
}

//ע������
//�����ķ���ֵ��������Ϊ�������ص�����
//int func(double a, int b)
//{
//	cout << "func(double a2) �ĵ���" << endl;
//}


int main3()
{
	func();
	func(10);
	func(3.14);
	func(10, 3.14);
	func(3.14, 10);

	system("pause");

	return 0;
}