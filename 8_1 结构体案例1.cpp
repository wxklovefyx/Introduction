///*
//
//	����������
//
//		ѧУ������������Ŀ��ÿ����ʦ����5��ѧ�����ܹ���3����ʦ���������£�
//
//			�����ѧ������ʦ�Ľṹ�壻
//
//			����������ʦ�Ľṹ���У�����ʦ������һ�����5��ѧ����������Ϊ��Ա��
//
//			��ѧ���ṹ��ĳ�Ա��ѧ�����������Է�����
//
//			������������3����ʦ��ͨ��������ÿ����ʦ��������ѧ����ֵ��
//
//			�����մ�ӡ����ʦ�����Լ���ʦ����ѧ�����ݡ�
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
//		// Ϊʲô����д�ᱨ��?
//		// tea_array[i].T_name = "Teacher_" + nameSeed[i];
//
//		// �ַ�����ƴ��
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
//		cout << "��ʦ������Ϊ��" << tea_array[i].T_name << endl;
//
//		for (int j = 0; j < 5; j++)
//		{
//			cout << "\t" << "ѧ��������Ϊ��" << tea_array[i].stu_array[j].S_name <<"\t" << "����Ϊ��" << tea_array[i].stu_array[j].score << endl;
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