#include<iostream>
using namespace std;

//����ѧ���ṹ��
struct student
{
	string name;//����
	int age;//����
	int score;//����
};

//������ʦ�ṹ��
struct teacher
{
	int id;//���
	string name;//��ʦ����
	int age;//����
	struct student stu;//������ѧ��
};

int main60()
{

	//�ṹ��Ƕ�׽ṹ��
	//������ʦ
	teacher t;
	t.id = 1000;
	t.name = "����ʦ";
	t.age = 45;
	t.stu.name = "����";
	t.stu.age = 18;
	t.stu.score = 60;

	cout << "��ʦ����" << t.name << " ְ����ţ�" << t.id
		<< " ���䣺" << t.age << " ��ʦ������ѧ��������" 
		<< t.stu.name << " ѧ�������䣺" << t.stu.age 
		<< " ѧ���ķ�����" << t.stu.score << endl;

	system("pause");

	return 0;
}