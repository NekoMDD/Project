#include<iostream>
using namespace std;

int* func()
{
	//����new�ؼ���  ���Խ����ݿ��ٵ�����
	//int a = 10;
	//return &a;

	//ָ�뱾��Ҳ�Ǿֲ�����������ջ�ϣ�ָ�뱣��������Ƿ��ڶ�����
	int* p = new int(10);
	return p;
}

int main()
{
	//�ڶ�����������
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;

	system("pause");

	return 0;
}