#include<iostream>
using namespace std;

//1�����캯���ķ��༰����
//����
//1�����ղ������� �޲ι��죨Ĭ�Ϲ��죩���вι���
//2���������ͷ��� ��ͨ����Ϳ�������
class Person8
{
public:
	Person8()
	{
		cout << "Person���޲ι��캯������" << endl;
	}
	Person8(int a)
	{
		age = a;
		cout << "Person���вι��캯������" << endl;
	}
	//�������캯��
	Person8(const Person8 &p)
	{
		//������������ϵ��������ԣ�������������
		age = p.age;
		cout << "Person�Ŀ������캯������" << endl;
	}
	~Person8()
	{
		cout << "Person��������������" << endl;
	}
	int age;
};

//����
void test018()
{
	//1�����ŷ�
	//Person p1;//Ĭ�Ϲ��캯������ ��Ҫ�ӣ���
	//Person p2(10);//�вι��캯��
	//Person p3(p2);//�������캯���ĵ���

	//ע������1
	//����Ĭ�Ϲ��캯��ʱ����Ҫ�ӡ�������
	//�������ţ�����������Ϊ��һ��������������������Ϊ�ڴ�������
	//cout << "p2������Ϊ��" << p2.age << endl;
	//cout << "p3������Ϊ��" << p3.age << endl;

	//2����ʾ��
	Person8 p1;
	Person8 p2 = Person8(10);//�вι���
	Person8 p3 = Person8(p2);//��������

	//Person(10);//���ڵȺ��Ҳ����������  �ص㣺��ǰ��ִ�н�����ϵͳ���������յ���������
	//cout << "aa" << endl;

	//ע������2
	//��Ҫ���ÿ������캯������ʼ��һ����������   ����������ΪPerson��p3��=== Person p3���ض��壩��������

	//3����ʽת����
	Person8 p4 = 10;//�൱��д��Person p4= Person(10)
	Person8 p5 = p4;//��������
}

int main8()
{
	test018();

	system("pause");

	return 0;
}