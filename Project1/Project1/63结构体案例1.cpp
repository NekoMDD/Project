#include<iostream>
using namespace std;

//ѧ���Ľṹ��
struct Student
{
	string sName;//ѧ������
	int score;//ѧ������
};

//��ʦ�Ľṹ�嶨��
struct Teacher
{
	string tName;//����
	struct Student sArray[5];//ѧ������
};

//����ʦ��ѧ����ֵ�ĺ���
void allocatespace(struct Teacher tArray[],int len)
{
	//����ʦ��ʼ��ֵ
	string naneseed = "ABCDE";
	for (int i = 0; i < len; i++)
	{
		tArray[i].tName = "Teacher_";
		tArray[i].tName += naneseed[i];
		//ͨ��ѭ����ÿ����ʦ������ѧ����ֵ
		for (int j = 0; j < 5; j++)
		{
			tArray[i].sArray[j].sName = "Student_";
			tArray[i].sArray[j].sName += naneseed[j];
			int random = rand() % 61 + 40;//0~60��,+40����40~100֮��
			tArray[i].sArray[j].score = random;
		}
		
	}
}
//��ӡ������Ϣ
void printinfo(struct Teacher tArray[],int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "��ʦ������" << tArray[i].tName << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\tѧ��������" << tArray[i].sArray[j].sName << " ���Է�����" << tArray[i].sArray[j].score << endl;
		}
	}
}

int main63()
{

	//���������
	srand((unsigned)time(NULL));

	//1������������ʦ������
	struct Teacher tArray[3];

	//2��ͨ��������������ʦ����Ϣ��ֵ�����Ҹ���ʦ����ѧ����Ϣ��ֵ
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocatespace(tArray, len);

	//3����ӡ������ʦ������ѧ������Ϣ
	printinfo(tArray,len);


	system("pause");

	return 0;
}