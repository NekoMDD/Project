#include<iostream>
using namespace std;

int main7()
{
	//1�������� float
	//2��˫���� double
	//Ĭ������£����һ��С��������ʾ����λ��Ч����

	float f1 = 3.1415926f;

	cout << "f1 = " << f1 << endl;

	double d1 = 3.1415926;
	cout << "d1 = " << d1 << endl;

	//ͳ��float��doubleռ���ڴ�ռ�
	cout << "floatռ�õ��ڴ�ռ�Ϊ��" << sizeof(float) << endl;//4�ֽ�
	cout << "doubleռ�õ��ڴ�ռ�Ϊ��" << sizeof(double) << endl;//8�ֽ�

	//��ѧ������
	float f2 = 3e2;//e���Ϊ���������3*10^n
	cout << "f2=" << f2 << endl;
	float f3 = 3e-2;//e���Ϊ���������3*0.1^n
	cout << "f3=" << f3 << endl;

	system("pause");

	return 0;
}