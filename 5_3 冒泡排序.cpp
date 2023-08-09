/*

方法：

	1、比较相邻的元素，如果第一个比第二个大，就交换他们两个的位置；

	2、对每一对相邻元素做同样的工作，执行完毕后，找到第一个最大值，像气泡一样冒出来；

	3、重复以上的步骤，每次比较次数 -1，直到不需要比较；

	4、外层循环i是排序的轮数，内层循环j是要对比的次数；

	5、总排序轮数i = 元素个数 - 1；

	6、内层对比次数j = 元素个数 - 当前轮数i - 1；

*/


//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int arr[9] = {4,2,8,0,5,7,1,3,9};
//
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]) - 1; i++)
//	{
//		for (int j = 0; j < sizeof(arr) / sizeof(arr[0]) - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]) - 1; i++)
//	{
//		cout << arr[i] << "  ";
//	}
//
//	cout << endl;
//
//	system("pause");
//	return 0;
//}