//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int arr[5] = { 1,3,2,5,4};
//
//	int num = sizeof(arr) / sizeof(arr[0]);
//
//	for (int i = 0; i < num / 2; i++)
//	{
//		int temp = arr[i];
//		arr[i] = arr[num - i - 1];
//		arr[num - i - 1] = temp;
//	}
//
//	for (int j = 0; j < num; j++)
//	{
//		cout << arr[j] << " ";
//	}
//	cout << endl;
//
//	system("pause");
//	return 0;
//}