#include <stdio.h>

void bubble_sort(int arr[], int sz)
{
	
	//确定趟数：趟数 = n - 1
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//一趟冒泡排序的过程
		int j = 0;
		int flag = 1;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				//交换
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
		if (flag == 1) //若给定数组本就为升序,则跳出循环
		{
			break;
		}
	}
}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	//排序为升序 - 冒泡排序
	//思想：两两相邻的元素进行比较,并且可能的话需要交换
	
	//计算数组元素个数
	int sz = sizeof(arr) / sizeof(arr[0]);  //sizeof计算的是整个数组的大小单位是字节
	bubble_sort(arr, sz);  //数组传参的时候,传递的是数组数组首元素地址
	for (int i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}