//#include<iostream>
//using namespace std;
//#include<ctime>
//
//int main()
//{
//	// 随机数种子
//	srand((unsigned int)time(NULL));
//
//	// 生成随机数（伪随机数，需要搭配随机数种子才能生成真正的随机数）
//	int num1 = rand() % 100 + 1;
//
//	int num2 = 0;
//	cout << "请输入你的游戏数字：";
//
//	while (1)
//	{
//		cin >> num2;
//		
//		if (num1 > num2)
//		{
//			cout << "你输入的数字小于游戏数字，请重新输入：";
//		}
//		else if (num1 < num2)
//		{
//			cout << "你输入的数字大于游戏数字，请重新输入：";
//		}
//		else
//		{
//			cout << "恭喜你，猜对了" << endl; 
//			break;
//		}
//	}
//
//	system("pause");
//
//	return 0;
//}