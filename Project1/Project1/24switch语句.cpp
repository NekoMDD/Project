#include<iostream>
using namespace std;

int main()
{

	//switch (���ʽ)
	//{
	//	case ���1��ִ����䣻break;
	//default:
	//	break;
	//}

	//switch���
	//����Ӱ��������
	// 10~9�� ����
	// 8~7��  �ǳ���
	// 6~5��  һ��
	// 5����  ��Ƭ

	//1����ʾ�û�����Ӱ����

	cout << "�����Ӱ�������֣�" << endl;

	//2���û���ʼ��������

	int score = 0;
	cin >> score;
	cout << "����ķ���Ϊ��" << score << endl;

	//3�������û�����ķ�������ʾ�û������

	switch (score)
	{
	case 10:
		cout << "����Ϊ�Ǿ����Ӱ" << endl;
	case 9:
		cout << "����Ϊ�Ǿ����Ӱ" << endl;
	}

	system("pause");

	return 0;
}