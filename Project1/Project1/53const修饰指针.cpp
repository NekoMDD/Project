#include<iostream>
using namespace std;

int main53()
{

	//1��const����ָ��  ����ָ��
	int a = 10;
	int b = 10;

	const int* p = &a;
	//ָ��ָ���ֵ�����Ըģ�ָ���ָ����Ը�
	p = &b;

	//2��const���γ���  ָ�볣��
	int* const p2 = &a;
	//ָ���ָ�򲻿��Ըģ�ָ��ָ���ֵ���Ը�
	*p2 = 100;
	
	//3��const����ָ��ͳ���
	const int* const p3 = &a;
	//ָ���ָ���ָ��ָ���ֵ�������Ը�
	//*p3 = 100;  ����
	//p3 = &b;	  ����


	system("pause");

	return 0;
}