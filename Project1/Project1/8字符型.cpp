#include<iostream>
using namespace std;

int main8()
{

	//1���ַ��ͱ���������ʽ
	char ch = 'A';
	cout << ch << endl;

	//2���ַ��ͱ�����ռ���ڴ��С
	cout << "�ַ��ͱ�����ռ�ڴ��С��" << sizeof(char) << endl;

	//3���ַ��ͱ�����������
	//char ch2 = "b";//�����ַ��ͱ���ʱ��Ҫ�õ�����
	//char ch2 = 'abcdef';//�����ַ��ͱ�������������ֻ����һ���ַ�

	//4���ַ��ͱ�����ӦASCII����
	//a��Ӧ97
	//A��Ӧ65
	cout << (int)ch << endl;//ǿתint

	system("pause");

	return 0;
}