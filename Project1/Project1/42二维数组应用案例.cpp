#include<iostream>
using namespace std;

int main42()
{

	//��ά���鿼�Գɼ�ͳ�ư���

	//1��������ά����
	int scores[3][3] =
	{
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};

	string names[3] = { "����","����","����" };

	//2��ͳ��ÿ���˵��ܺͷ���

	for (int i = 0; i < 3; i++)
	{
		int sum = 0;//ͳ�Ʒ����ܺ͵ı���
		for (int j = 0; j < 3; j++)
		{
			sum += scores[i][j];
			/*cout << scores[i][j] << " ";*/
		}
		cout << names[i] << "���ܷ�Ϊ��" << sum << endl;
	}

	system("pause");

	return 0;
}