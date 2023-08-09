///*
//
//	案例描述：设计一个英雄的结构体，包括成员姓名，年龄，性别
//
//			  创建结构体数组，数组中存放5名英雄
//
//			  通过冒泡排序算法，将数组中的英雄按照年龄进行升序排列，最终打印排序后的结果。
//
//			  五名英雄信息如下：
//
//			  1.刘备		23		男
//			  2.关羽		22		男
//			  3.张飞		20		男
//			  4.赵云		21		男
//			  5.貂蝉		19		女
//
//*/
//
//
//#include<iostream>
//#include<string>
//using namespace std;
//
//struct Hero
//{
//	string name;
//	int age;
//	string sex;
//};
//
//
//void BubbleSort(struct Hero hero_array[], int len)
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		for (int j = 0; j < len - i - 1; j++)
//		{
//			if (hero_array[j].age > hero_array[j + 1].age)
//			{
//				// 首先，下面三行代码出现了几个很离谱的错误
//
//				// 1、临时变量的数据类型应该是 "struct Hero"，应该与数组 hero_array[] 的数据类型一致，所以不应该是 int 数据类型
//
//				// 2、这里的排序是利用年龄的大小来对整个结构体进行排序，不止是 age，还应该包括 姓名name、性别sex，所以单纯的对年龄排序是错误的
//
//				// 3、这样排序后打印的结果，仅仅是对年龄进行了排序，而姓名和性别依然还是原来的顺序
//
//				//int temp = hero_array[j].age;
//				//hero_array[j].age = hero_array[j + 1].age;
//				//hero_array[j + 1].age = temp;
//
//				// 所以，正确写法应该是：
//				struct Hero temp = hero_array[j];
//				hero_array[j] = hero_array[j + 1];
//				hero_array[j + 1] = temp;
//			}
//		}
//	}
//}
//
//
//void Printhero(struct Hero hero_array[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << "姓名为：" << hero_array[i].name << "\t年龄为：" << hero_array[i].age << "\t性别为：" << hero_array[i].sex << endl;
//	}
//}
//
//
//int main()
//{
//	struct Hero hero_array[5] = { {"刘备", 23, "男"},
//								  {"关羽", 22, "男"},
//								  {"张飞", 20, "男"},
//								  {"赵云", 21, "男"},
//								  {"貂蝉", 19, "女"},
//								};
//
//	int len = sizeof(hero_array) / sizeof(hero_array[0]);
//
//	BubbleSort(hero_array, len);
//
//	Printhero(hero_array, len);
//
//	system("pause");
//	return 0;
//}