#include<iostream>
using namespace std;

//����ѧ���Ľṹ��
struct student
{
	string name;
	int age;
	int score;
};
//��ӡѧ����Ϣ�ĺ���
//1��ֵ����
void printstudent1(struct student s)
{
	cout << "������" << s.name << " ���䣺" << s.age << " ������" << s.score << endl;
}
//2����ַ����
void printstudent2(struct student*p)
{
	cout << "��ַ������ ������" << p->name << " ���䣺" << p->age << " ������" << p->score << endl;
}

int main61()
{

	//�ṹ������������
	//��ѧ�����뵽һ�������У���ӡѧ�����ϵ�������Ϣ

	//�����ṹ�����
	struct student s;
	s.name = "����";
	s.age = 20;
	s.score = 80;

	printstudent1(s);
	printstudent2(&s);

	system("pause");

	return 0;
}