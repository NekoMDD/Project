#include<iostream>
using namespace std;

int main2()
{
	int a = 10;

	//1�����ñ����ʼ��
	//int& b;//���󣬱���Ҫ��ʼ��
	int& b = a;

	//2�������ڳ�ʼ���󣬲����Ըı�
	int c = 20;

	b = c;//��ֵ�����������Ǹı�����
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;

	system("pause");

	return 0;
}