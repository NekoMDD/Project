#include<iostream>
using namespace std;

int main24()
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

	switch (score)//switch�ı��ʽֻ�������ͻ����ַ���
	{
	case 10:
		cout << "����Ϊ�Ǿ����Ӱ" << endl;
		break;//�˳���ǰ��֧
	case 9:
		cout << "����Ϊ�Ǿ����Ӱ" << endl;
		break;
	case 8:
		cout << "����Ϊ��Ӱ�ǳ���" << endl;
		break;
	case 7:
		cout << "����Ϊ��Ӱ�ǳ���" << endl;
		break;
	case 6:
		cout << "����Ϊ��Ӱһ��" << endl;
		break;
	case 5:
		cout << "����Ϊ��Ӱһ��" << endl;
		break;
	default:
		cout << "����Ϊ����Ƭ" << endl;
		break;
	}

	//switchȱ�㣬�ж�ʱ��ֻ�������ͻ����ַ��ͣ������ж�����
	//switch�е㣬�ṹ������ִ��Ч�ʸ�

	system("pause");

	return 0;
}