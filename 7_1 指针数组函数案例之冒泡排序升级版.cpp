//#include<iostream>
//using namespace std;
//
//// int arr[] �ȼ��� int* arr;
//void BubbleSort(int arr[], int length)
//{
//	for (int i = 0; i < length - 1; i++)
//	{
//		for (int j = 0; j < length - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
//
//	int length = sizeof(arr) / sizeof(arr[0]);
//
//	BubbleSort(arr, length);
//
//	for (int i = 0; i < length; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//
//	system("pause");
//	return 0;
//}

/*

����ʱ�亯����������鸳ֵ���ڽ���ð������

#include<iostream>
#include<ctime>
using namespace std;

void BubbleSort(int* arr, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void getarr(int* arr, int len)
{
	for (int w = 0; w < len; w++)
	{
		arr[w] = rand() % 100 + 1;
	}
}

void Printarr(int* arr, int len)
{
	for (int u = 0; u < len; u++)
	{
		cout << arr[u] << " ";
	}
	cout << endl;
}

int main()
{
	srand((unsigned int)time(NULL));

	int arr[20];

	int len = sizeof(arr) / sizeof(arr[0]);

	getarr(arr, len);

	BubbleSort(arr, len);

	Printarr(arr, len);

	system("pause");
	return 0;
}

 ð������Ľ�������ʵ����Ҳ���Եȼ��ڣ�

	int temp = *(Array + j)��(Array + j)����ַ��1�� * (Array + j)��������ã���һ��ֵ

	����
		int temp = *(Array + j);

		*(Array + j) = *(Array + j + 1);

		*(Array + j + 1) = temp;

*/