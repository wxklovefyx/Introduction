///*
//
//	案例描述：
//
//		学校正在做毕设项目，每名老师带领5个学生，总共有3名老师，需求如下：
//
//			·设计学生和老师的结构体；
//
//			·其中在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员；
//
//			·学生结构体的成员有学生姓名、考试分数；
//
//			·创建数组存放3名老师，通过函数给每个老师及所带的学生赋值；
//
//			·最终打印出老师数据以及老师所带学生数据。
//
//*/
//
//
//#include<iostream>
//using namespace std;
//#include<string>
//#include<ctime>
//
//struct Student
//{
//	string S_name;
//	int score;
//};
//
//struct Teacher
//{
//	string T_name;
//	struct Student stu_array[5];
//};
//
//void get_tea_array_and_stu_array_Value(struct Teacher* tea_array, string nameSeed)
//{
//	for (int i = 0; i < 3; i++)
//	{	
//		// 为什么这样写会报错?
//		// tea_array[i].T_name = "Teacher_" + nameSeed[i];
//
//		// 字符串的拼接
//		tea_array[i].T_name = "Teacher_";
//		tea_array[i].T_name += nameSeed[i];
//
//		for (int j = 0; j < 5; j++)
//		{	
//			int random = rand() % 61 + 40;
//			tea_array[i].stu_array[j].S_name = "Student_";
//			tea_array[i].stu_array[j].S_name += nameSeed[j];
//
//			tea_array[i].stu_array[j].score = random;
//		}
//	}
//}
//
//void print_tea_array_and_stu_array(struct Teacher tea_array[], string nameSeed)
//{
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "老师的姓名为：" << tea_array[i].T_name << endl;
//
//		for (int j = 0; j < 5; j++)
//		{
//			cout << "\t" << "学生的姓名为：" << tea_array[i].stu_array[j].S_name <<"\t" << "分数为：" << tea_array[i].stu_array[j].score << endl;
//		}
//	}
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//
//	struct Teacher tea_array[3];
//	
//	string nameSeed = "ABCDE";
//
//	get_tea_array_and_stu_array_Value(tea_array, nameSeed);
//
//	print_tea_array_and_stu_array(tea_array, nameSeed);
//
//	system("pause");
//	return 0;
//}