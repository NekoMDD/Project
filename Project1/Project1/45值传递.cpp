#include<iostream>
using namespace std;

//ֵ����
//���庯����ʵ���������ֽ��н����ĺ���

//���һ����������Ҫ����ֵ��������ʱ�����дvoid
void swap(int num1, int num2)
{
	cout << "����ǰ��" << endl;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;

	int temp = num2;
	num2 = num1;
	num1 = temp;

	cout << "������" << endl;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
	return;//����ֵ����Ҫ��ʱ����Բ�дteturn
}

int main45()
{

	int a = 10;
	int b = 20;

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	//��������ֵ���ݵ�ʱ�򣬺������βη����ı䲢����Ӱ��ʵ��
	swap(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	system("pause");

	return 0;
}