#include<iostream>
using namespace std;

int main15()
{
	
	//1��ǰ�õ���

	int a = 10;
	++a;//�ñ������м�1�Ĳ���
	cout << "a=" << a << endl;

	//2�����õ���

	int b = 10;
	b++;
	cout << "b=" << b << endl;

	//3��ǰ�úͺ��õ�����
	//ǰ�õ��������ñ���+1Ȼ����б��ʽ����

	int a2 = 10;
	int b2 = ++a2 * 10;
	cout << "a2=" << a2 << endl;
	cout << "b2=" << b2 << endl;
	//���õ������Ƚ��б��ʽ������+1

	int a3 = 10;
	int b3 = a3++*10;
	cout << "a3=" << a3 << endl;
	cout << "b3=" << b3 << endl;

	//�ݼ���ϰ
	int c1 = 10;
	int c2 = --c1 * 10;
	cout << "c2=" << c2 << endl;//Ӧ�õ���90
	int c3 = c1-- * 10;
	cout << "c3=" << c3 << endl;//Ӧ�õ���90����Ϊ֮ǰһ��C1�Ѿ���--�����Ա��������c1��ʼֵΪ9

	system("pause");

	return 0;
}