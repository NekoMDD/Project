#include<iostream>
using namespace std;

//ð��������   ����1  �����׵�ַ  ����2  ���鳤��
void bubblesort(int *arr,int len)
{
	for (int i = 0; i < len-1; i++)
	{
		for (int j = 0; j < len-i-1; j++)
		{
			//���J>J+1��ֵ ��������
			if (arr[j]>arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}


//��ӡ����
void printarray(int* arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}
}
int main56()
{

	//1������һ������

	int arr[10] = { 4,3,6,9,1,2,10,8,7,5, };

	//���鳤��
	int len = sizeof(arr) / sizeof(arr[0]);

	//2������һ������ʵ��ð������

	bubblesort(arr, len);

	//3����ӡ����������

	printarray(arr, len);

	system("pause");

	return 0;
}