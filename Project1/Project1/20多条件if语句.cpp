#include<iostream>
using namespace std;

int main20()
{

	//ѡ��ṹ ������if���
	//����һ�����Է������������600��Ϊ����һ��
	//����500����Ϊ���϶�����ѧ
	//����400����Ϊ����������ѧ
	//С�ڵ���400����Ϊδ���ϱ���
	
	//1���û��������
	int score = 0;
	cout << "�����뿼�Է���" << endl;
	cin >> score;
	//2����ӡ����
	cout << "������ķ���Ϊ��" << score << endl;
	//3���ж�
	if (score > 600)
	{
		cout << "��ϲ������һ����ѧ" << endl;
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
		cout << "���ź�����δ���ϱ��ƴ�ѧ" << endl;
	}

	system("pause");

	return 0;
}