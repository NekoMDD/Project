#include<iostream>
using namespace std;

//1�����Ӣ�۽ṹ��
struct Hero
{
	//����
	string name;
	//����
	int age;
	//�Ա�
	string sex;
};
//ð������
void bubblesort(struct Hero heroArray[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)//�˴�����j<j-i-1�������Ǵ����ٷ�
		{
			if (heroArray[j].age > heroArray[j + 1].age)
			{
				struct Hero temp = heroArray[j];//�Ա�Ԫ����age����������������Ԫ�أ�ע�ⲻҪ������
				heroArray[j] = heroArray[j + 1];
				heroArray[j + 1] = temp;
			}
		}
	}
} 

//��ӡ�����������е���Ϣ
void printHero(struct Hero heroArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "������" << heroArray[i].name << " ���䣺" << heroArray[i].age << " �Ա�" << heroArray[i].sex << endl;
	}
}

int main64()
{

	//2����������������Ӣ��
	struct Hero heroArray[5] =
	{
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"}
	};

	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	//for (int i = 0; i < len; i++)
	//{
	//	cout << "������" << heroArray[i].name << " ���䣺" << heroArray[i].age << " �Ա�" << heroArray[i].sex << endl;
	//}

	//3��������������򣬰������������������
	bubblesort(heroArray, len);


	//4���������Ľ����ӡ���
	printHero(heroArray, len);


	system("pause");

	return 0;
}