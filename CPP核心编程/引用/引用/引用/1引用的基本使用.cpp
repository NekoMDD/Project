#include<iostream>
using namespace std;

int main1()
{
	//���õĻ����﷨
	//�������� &���� = ԭ��;
	int a = 10;
	int& b = a;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	
	b = 100;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	system("pause");

	return 0;
}