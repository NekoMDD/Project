#include<iostream>
using namespace std;

int main22()
{
	//1��Ϊ��ֻС����������
	int pig1 = 0;
	cout << "������С��1������" << endl;
	cin >> pig1;

	int pig2 = 0;
	cout << "������С��2������" << endl;
	cin >> pig2;

	int pig3 = 0;
	cout << "������С��3������" << endl;
	cin >> pig3;

	//2����ӡ��ֻС������

	cout << "С��1������Ϊ��" << pig1 << endl;
	cout << "С��2������Ϊ��" << pig2 << endl;
	cout << "С��3������Ϊ��" << pig3 << endl;

	//3���Ƚ��ж���ֻС��
	if (pig1 > pig2)
	{
		if (pig1 > pig3)
		{
			cout << "С��1Ϊ���ص�" << endl;
		}
		else
		{
			cout << "С��3Ϊ���ص�" << endl;
		}
	}
	else
	{
		if (pig2 > pig3)
		{
			cout << "С��2Ϊ���ص�" << endl;
		}
		else
		{
			cout << "С��3Ϊ����" << endl;
		}
	}

	//4�����
	system("pause");

	return 0;
}