#include<iostream>
using namespace std;

int main50()
{

	//ָ����ռ���ڴ�ռ��С
	int a = 10;
	int* p = &a;

	//��32λ����ϵͳ�£�ָ����ռ4���ֽڿռ��С������ʲô��������
	//��64λ����ϵͳ�£�ָ����ռ8���ֽڿռ��С������ʲô��������

	cout << "sizeof (int * =)" << sizeof(p) << endl;

	system("pause");

	return 0;
}