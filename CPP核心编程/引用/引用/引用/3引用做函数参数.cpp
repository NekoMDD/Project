#include<iostream>
using namespace std;

//��������

//1��ֵ����
void mySwap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "swapa=" << a << endl;
	cout << "swapb=" << b << endl;
}

//2����ַ����
void mySwap02(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//3�����ô���
void mySwap03(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main3()
{
	int a = 10;
	int b = 20;

	//mySwap01(a, b);//ֵ���ݣ��ββ�������ʵ��
	//mySwap02(&a, &b);//��ַ���ݣ��βλ�����ʵ��
	mySwap03(a, b);

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	system("pause");

	return 0;
}