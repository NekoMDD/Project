#include<iostream>
using namespace std;

int* func1()
{
	//����new�ؼ���  ���Խ����ݿ��ٵ�����
	//int a = 10;
	//return &a;

	//ָ�뱾��Ҳ�Ǿֲ�����������ջ�ϣ�ָ�뱣��������Ƿ��ڶ�����
	int* p = new int(10);
	return p;
}

int main3()
{
	//�ڶ�����������
	int* p = func1();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;

	system("pause");

	return 0;
}