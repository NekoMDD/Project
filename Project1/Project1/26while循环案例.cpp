#include<iostream>
using namespace std;

int main26()
{
	//�������������ӣ����õ�ǰϵͳʱ�����������������ÿ���������һ��
	srand((unsigned int)time(NULL));

	//1�����������
	int num = rand() % 100 + 1;  //rand()%100 ������0~99�������
	
	//2����ҽ��в²�
	int val = 0;//������������

	while (1)
	{
		cin >> val;
		if (val > num)
		{
			cout << "����������" << endl;
		}
		else if (val < num)
		{
			cout << "��������С" << endl;
		}
		else
		{
			cout << "������ȷ��" << endl;
			break;//break��ѭ���п������øùؼ����˳���ǰѭ��
		}
	}


	//3���ж���ҵĲ²�

	system("pause");

	return 0;
}