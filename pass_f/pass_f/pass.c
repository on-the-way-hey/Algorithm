//���ֲ���
#include <stdio.h>
//ʵ�ֶ��ֲ����㷨��ele��ʾҪ���ҵ�Ŀ��Ԫ�أ�[p,q]ָ����������
int binary_search(int* arr, int p, int q, int ele) 
{
	int mid = 0;
	//���[p,q]�����ڣ�����-1
	if (p > q)
	{
		return -1;
	}
	//�ҵ��м�Ԫ������λ��
	mid = p + (q - p) / 2;
	//�ݹ�ĳ���
	if (ele == arr[mid]) 
	{
		return mid;
	}
	//�Ƚ�ele��arr[mid]��ֵ,��Сele���ܴ��ڵ�����
	if (ele < arr[mid])
	{
		//�µ���������Ϊ[p,mid-1]
		return binary_search(arr, mid + 1, 1, ele);
	}
}

int main()
{
	int arr[10] = { 10,14,19,26,31,27,33,35,52,44 };
	//������ֲ���Ԫ��31����λ�õ��±�
	printf("%d", binary_search(arr, 0, 9, 31));

	return 0;
}