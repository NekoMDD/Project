#include<iostream>
using namespace std;

class C1
{
	int m_A;
};

struct C2
{
	int m_A;
};

int main3()
{
	//struct �� class������
	//struct Ĭ��Ȩ���� ���� public
	//class  Ĭ��Ȩ���� ˽�� private 
	C1 c1;
	//c1.m_A = 100;

	C2 c2;
	c2.m_A = 100;//��struct��Ĭ��Ȩ��Ϊ��������˿��Է���

	system("pause");

	return 0;
}