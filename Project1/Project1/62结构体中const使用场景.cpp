#include<iostream>
using namespace std;

//const��ʹ�ó���
struct student
{
	string name;
	int age;
	int score;
};

//�������е��βθ�Ϊָ�룬���Լ����ڴ�ռ䣬���Ҳ��Ḵ���µĸ���
void printstudent(const student *s)
{
	//s->age = 150 ;//����const֮��һ�����޸ĵĲ����ͻᱨ����ֹ�����
	cout << "������" << s->name << " ���䣺" << s->age << " ������" << s->score << endl;
}

int main62()
{
	//�����ṹ�����
	struct student s = { "����",15,70 };

	//ͨ��������ӡ�ṹ�������Ϣ
	printstudent(&s);


	system("pause");

	return 0;
}