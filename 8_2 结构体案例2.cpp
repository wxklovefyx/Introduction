///*
//
//	�������������һ��Ӣ�۵Ľṹ�壬������Ա���������䣬�Ա�
//
//			  �����ṹ�����飬�����д��5��Ӣ��
//
//			  ͨ��ð�������㷨���������е�Ӣ�۰�����������������У����մ�ӡ�����Ľ����
//
//			  ����Ӣ����Ϣ���£�
//
//			  1.����		23		��
//			  2.����		22		��
//			  3.�ŷ�		20		��
//			  4.����		21		��
//			  5.����		19		Ů
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
//				// ���ȣ��������д�������˼��������׵Ĵ���
//
//				// 1����ʱ��������������Ӧ���� "struct Hero"��Ӧ�������� hero_array[] ����������һ�£����Բ�Ӧ���� int ��������
//
//				// 2���������������������Ĵ�С���������ṹ��������򣬲�ֹ�� age����Ӧ�ð��� ����name���Ա�sex�����Ե����Ķ����������Ǵ����
//
//				// 3������������ӡ�Ľ���������Ƕ�������������򣬶��������Ա���Ȼ����ԭ����˳��
//
//				//int temp = hero_array[j].age;
//				//hero_array[j].age = hero_array[j + 1].age;
//				//hero_array[j + 1].age = temp;
//
//				// ���ԣ���ȷд��Ӧ���ǣ�
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
//		cout << "����Ϊ��" << hero_array[i].name << "\t����Ϊ��" << hero_array[i].age << "\t�Ա�Ϊ��" << hero_array[i].sex << endl;
//	}
//}
//
//
//int main()
//{
//	struct Hero hero_array[5] = { {"����", 23, "��"},
//								  {"����", 22, "��"},
//								  {"�ŷ�", 20, "��"},
//								  {"����", 21, "��"},
//								  {"����", 19, "Ů"},
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