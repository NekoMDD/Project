#include<iostream>
using namespace std;

int main21()
{

	//1����ʾ�������
	int score = 0;
	cout << "�����뿼�Է���" << endl;
	cin >> score;

	//2����ʾ����
	cout << "���Ŀ��Է���Ϊ��" << score << endl;

	//3���ж�
	if (score > 600)
	{
		cout << "��ϲ��������һ����ѧ" << endl;
		if (score > 700)
		{
			cout << "���ܿ��뱱����ѧ" << endl;
		}
		else if (score > 650)
		{
			cout << "���ܿ����廪��ѧ" << endl;
		}
		else
		{
			cout << "���ܿ��������ѧ" << endl;
		}
	}
	else if (score > 500)
	{
		cout << "��ϲ�������˶�����ѧ" << endl;
	}
	else if (score > 400)
	{
		cout << "��ϲ��������������ѧ" << endl;
	}
	else
	{
		cout << "��ϲ�������˼���״�ѧ���ˣ�" << endl;
	}

	system("pause");

	return 0;
}