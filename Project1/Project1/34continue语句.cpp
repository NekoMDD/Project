#include<iostream>
using namespace std;

int main34()
{

	//continue���
	for (int i = 0; i <= 100; i++)
	{
		//��������������ż�������
		if (i % 2 == 0)
		{
			continue;//����ɸѡ�ض�������ִ�е���Ϊֹ
		}
		cout << i << endl;
	}

	system("paues");

	return 0;
}