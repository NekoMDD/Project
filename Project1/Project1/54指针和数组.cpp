#include<iostream>
using namespace std;

int main54()
{

	//ָ�������
	//����ָ����������е�Ԫ��

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;//����������������׵�ַ
	//cout << "����ָ����ʵ�һ��Ԫ��" << *p << endl;
	//p++;//��ָ���������ĸ��ֽ�
	//cout << "����ָ����ʵڶ���Ԫ��" << *p << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << *p << endl;
		p++;
	}

	system("pause");

	return 0;
}