#include<iostream>
using namespace std;

//��ӡ���ݵĺ���
void showValue(const int& val)
{
	//val = 1000;
	cout << "val=" << val << endl;
}

int main()
{

	//��������
	//ʹ�ó��������������βΣ���ֹ�����
	//int a = 10;
	//const int& ref = 10;//���ñ�����һ����Ϸ����ڴ�ռ�
	//��const֮�� �������������޸�Ϊ��int temp = 10;const int & ref = temp;
	//ref = 20;//����const֮���Ϊֻ��״̬�������޸�

	int a = 100;
	showValue(a);

	cout << "a=" << a << endl;

	system("pause");

	return 0;
}