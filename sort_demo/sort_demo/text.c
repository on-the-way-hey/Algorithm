#include <stdio.h>

void bubble_sort(int arr[], int sz)
{
	
	//ȷ������������ = n - 1
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//һ��ð������Ĺ���
		int j = 0;
		int flag = 1;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				//����
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
		if (flag == 1) //���������鱾��Ϊ����,������ѭ��
		{
			break;
		}
	}
}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	//����Ϊ���� - ð������
	//˼�룺�������ڵ�Ԫ�ؽ��бȽ�,���ҿ��ܵĻ���Ҫ����
	
	//��������Ԫ�ظ���
	int sz = sizeof(arr) / sizeof(arr[0]);  //sizeof���������������Ĵ�С��λ���ֽ�
	bubble_sort(arr, sz);  //���鴫�ε�ʱ��,���ݵ�������������Ԫ�ص�ַ
	for (int i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}