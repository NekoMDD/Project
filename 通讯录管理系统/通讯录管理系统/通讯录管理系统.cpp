#include<iostream>
using namespace std;
#define MAX 1000

//�����ϵ�˽ṹ��
struct Person
{
	string m_Nmame;//����
	int m_Sex;//�Ա� 1����  2��Ů
	int m_age;//����
	string m_phone;//�绰
	string m_Addr;//סַ
};

//���ͨѶ¼�ṹ��
struct Addressbooks
{
	//ͨѶ¼�б������ϵ������
	struct Person personArray[MAX];

	//ͨѶ¼�е�ǰ��¼��ϵ�˸���
	int m_Size;
};

//1�������ϵ��
void addPerson(Addressbooks* abs)
{
	//�ж�ͨѶ¼�Ƿ�����
	if (abs->m_Size==MAX)
	{
		cout << "ͨѶ¼�������޷���ӣ�" << endl;
		return;
	}
	else
	{
		//��Ӿ�����ϵ��

		//����
		string name;
		cout << "������������ " << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Nmame = name;
		//�Ա�
		cout << "�������Ա�" << endl;
		cout << "1---��" << endl;
		cout << "2---Ů" << endl;
		int sex = 0;
		
		while (true)
		{
			//����������1����2�����˳�ѭ������Ϊ����ֵ��ȷ
			//�������������������
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "�����������������룡" << endl;
		}

		//����
		cout << "���������䣺 " << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].m_age = age;

		//�绰
		cout << "��������ϵ�绰�� " << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_phone = phone;

		//סַ
		cout << "�������ͥסַ�� " << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;

		//����ͨѶ¼����
		abs->m_Size++;
		cout << "��ӳɹ���" << endl;

		system("pause");
		system("cls");//��������
	}
}

//2����ʾ���е���ϵ��
void showPerson(Addressbooks* abs)
{
	//�ж�ͨѶ¼�������Ƿ�Ϊ�㣬���Ϊ0����ʾ��¼Ϊ��
	//�����Ϊ0����ʾ��¼����ϵ����Ϣ
	if (abs->m_Size==0)
	{
		cout << "��ǰ��¼Ϊ�գ�" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "������" << abs->personArray[i].m_Nmame << "\t";
			cout << "�Ա�" << (abs->personArray[i].m_Sex == 1 ? "��" : "Ů") << "\t";//ʹ����Ŀ��������ӿ�ݵĶ���Ů�����жϲ���ӡ������Ҫifѭ����ô�鷳
			cout << "���䣺" << abs->personArray[i].m_age << "\t";
			cout << "�绰��" << abs->personArray[i].m_phone << "\t";
			cout << "��ַ��" << abs->personArray[i].m_Addr << endl;
		}
	}
	system("pause");
	system("cls");
}

//�����ϵ���Ƿ���ڣ�������ڣ�������ϵ�����������еľ���λ�ã������ڷ���-1
int isExist(Addressbooks* abs, string name)//����1������һ��ͨѶ¼������2����Աȵ�����
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		if (abs->personArray[i].m_Nmame==name)//�ҵ��û����������
		{
			return i;//�ҵ��ˣ�����������������е��±���
		}
	}
	return -1;//�������������û�ҵ�������-1
}

//3��ɾ��ָ������ϵ��
void deletePerson(Addressbooks* abs)
{
	cout << "��������Ҫɾ������ϵ�ˣ�" << endl;

	string name;
	cin >> name;

	int ret = isExist(abs, name);//ret==-1˵��û�鵽��ret��=-1˵���鵽��

	if (ret!=-1)
	{
		//���ҵ��ˣ�Ҫ����ɾ��
		for (int i = ret; i < abs->m_Size; i++)
		{
			//����ǰ��
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;//����ͨѶ¼�е���Ա��
		cout << "ɾ���ɹ���" << endl;
	}
	else
	{
		cout << "���޴��ˣ�" << endl;
	}
	system("pause");
	system("cls");
}

//4������ָ����ϵ��
void findPerson(Addressbooks* abs)
{
	cout << "��������Ҫ���ҵ���ϵ�ˣ�" << endl;
	string name;
	cin >> name;

	//�ж�ָ������ϵ���Ƿ����ͨѶ¼��
	int ret = isExist(abs, name);
	if (ret!=-1)
	{
		cout << "������" << abs->personArray[ret].m_Nmame << "\t";
		cout << "�Ա�" << (abs->personArray[ret].m_Sex == 1 ? "��" : "Ů") << "\t";
		cout << "���䣺" << abs->personArray[ret].m_age << "\t";
		cout << "�绰��" << abs->personArray[ret].m_phone << "\t";
		cout << "��ַ��" << abs->personArray[ret].m_Addr << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}

//5���޸���ϵ����Ϣ
void modifyPerson(Addressbooks* abs)
{
	cout << "��������Ҫ�޸ĵ���ϵ��" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);

	if (ret!=-1)
	{
		//����
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[ret].m_Nmame = name;
		//�Ա�
		cout << "�������Ա�" << endl;
		cout << "1---��" << endl;
		cout << "2---Ů" << endl;
		int sex = 0;
		cin >> sex;
		while (true)
		{
			if (sex == 1 || sex == 2)
			{
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			cout << "�����������������룡" << endl;
		}
		//����
		cout << "���������䣺" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[ret].m_age = age;
		//�绰
		cout << "��������ϵ�绰��" << endl;
		string phone;//����string phone = 0��string �ַ����Ͳ���д=0
		cin >> phone;
		abs->personArray[ret].m_phone = phone;
		//��ַ
		cout << "�������ַ��" << endl;
		string addr;
		cin >> addr;
		abs->personArray[ret].m_Addr = addr;

		cout << "�޸ĳɹ���" << endl;
	}
	else
	{
		cout << "���޴��ˣ�" << endl;
	}
	system("pause");
	system("cls");
}

//6�������ϵ��
void cleanPerson(Addressbooks* abs)
{
	cout << "�Ƿ�Ҫ�����ϵ�ˣ�" << endl;
	cout << "1---ȷ�����" << endl;
	cout << "2---ȡ�����" << endl;
	int key = 0;
	cin >> key;

	switch (key)//������ϰ������ղ������ж����жϣ�ʹ��switchѡ��
	{
	case 1:
		abs->m_Size = 0;//����ǰ��¼��ϵ����������Ϊ0�����߼���ղ���
		cout << "ͨѶ¼�����" << endl;
		system("pause");
		system("cls");
		break;
	case 2:
		cout << "��ȡ��" << endl;
		system("pause");
		system("cls");
		break;
	default:
		cout << "�����������������룡" << endl;
		system("pause");
		system("cls");
	}
}

//�˵�����
void showMenu()
{
	cout << "*************************" << endl;
	cout << "***** 1�������ϵ�� *****" << endl;
	cout << "***** 2����ʾ��ϵ�� *****" << endl;
	cout << "***** 3��ɾ����ϵ�� *****" << endl;
	cout << "***** 4��������ϵ�� *****" << endl;
	cout << "***** 5���޸���ϵ�� *****" << endl;
	cout << "***** 6�������ϵ�� *****" << endl;
	cout << "***** 0���˳�ͨѶ¼ *****" << endl;
	cout << "*************************" << endl;
}


int main()
{
	//����һ��ͨѶ¼�Ľṹ�����
	Addressbooks abs;
	//��ʼ��ͨѶ¼�е�ǰ��Ա����
	abs.m_Size = 0;

	int select = 0;//����һ���û�ѡ������ı���

	while (true)
	{
		showMenu();//�˵��ĵ���

		cin >> select;

		switch (select)//�ѡ����
		{
		case 1://1�������ϵ��
			addPerson(&abs);//���õ�ַ���ݿ�������ʵ��
			break;
		case 2://2����ʾ��ϵ��
			showPerson(&abs);
			break;
		case 3://3��ɾ����ϵ��
		//{
		//	cout << "������Ҫɾ������ϵ�˵�������" << endl;
		//	string name;
		//	cin >> name;
		//	if (isExist(&abs, name) == -1)
		//	{
		//		cout << "���޴���" << endl;
		//	}
		//	else
		//	{
		//		cout << "�ҵ���" << endl;
		//	}
		//}
			deletePerson(&abs);//���ú���
			break;
		case 4://4��������ϵ��
			findPerson(&abs);
			break;
		case 5://5���޸���ϵ��
			modifyPerson(&abs);
			break;
		case 6://6�������ϵ��
			cleanPerson(&abs);
			break;
		case 0://0���˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "�����������������룡" << endl;
			system("pause");
			system("cls");
			break;
		}
	}

	system("pause");

	return 0;
}