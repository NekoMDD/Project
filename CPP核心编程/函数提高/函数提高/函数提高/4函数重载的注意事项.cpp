#include<iostream>
using namespace std;

//�������ص�ע������
//1��������Ϊ���ص�����
void func(int& a)
{
	cout << "func(int& a)�ĵ���" << endl;
}

void func(const int& a)
{
	cout << "func(const int& a)�ĵ���" << endl;
}


//2��������������Ĭ�ϲ���
void func2(int a, int b = 10)
{
	cout << "func2(int a,int b)�ĵ���" << endl;
}

void func2(int a)
{
	cout << "func2(int a)�ĵ���" << endl;
}
int main4()
{
	//int a = 10;
	//func(a);
	//func(10);

	//func2(10);//��������������Ĭ�ϲ���������ֶ����ԣ�����������������д��


	system("pause");

	return 0;
}