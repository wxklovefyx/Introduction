/*

结构体

	

	1、结构体基本概念

		概述：结构体属于用户自定义的数据类型，允许用户存储不同的数据类型；

		本质：就是内置的一些数据类型的集合，即可以将 整型、浮点型、字符型 等数据类型放在一起，组成一个新的数据类型，就构成结构体；



	2、结构体定义和使用：

		语法：struct 结构体名 {结构体成员列表}；


		通过结构体创建变量的方式有三种：

			·struct 结构体名 变量名;

			·struct 结构体名 变量名 = {成员1值，成员2值....};

			·定义结构体时顺便创建结构体变量（一般不建议使用）


		注意：在 C++ 中，struct 关键字在自定义时不可以省略，但是在创建变量时可以省略；


		例如：struct Student（此处的 struct 关键字不可以省略）
			{
				string name;
				int age;
				int score;
			};


		创建变量的本质就是：数据类型(struct 结构体名) 变量名；即可以把 "struct 结构体名" 整体想象成结构体特有的数据类型，再来创建和定义变量；


			·struct 结构体名 变量名;

				struct Student s1;	（创建结构体变量时 struct 关键字可以省略，可以直接写成 Student s1）
				s1.name = "张三";
				s1.age = 18;
				s1.score = 100;


			·struct 结构体名 变量名 = {成员1值，成员2值....};

				struct Student s2 = { "李四", 19, 80 };


			·定义结构体时顺便创建结构体变量(一般不建议使用)

				struct Student
				{
					string name;
					int age;
					int score;
				}s3;
				s3.name = "王五";
				s3.age = 20;
				s3.score = 60;


		总结：
			
			·定义结构体的关键字是 struct，不可省略；

			·创建结构体变量时，关键字 struct 可以省略；

			·结构体变量利用操作符 "·" 访问成员；



	3、结构体数组

		作用：将自定义的结构体放入到数组中方便维护；

		语法：struct 结构体名 数组名[元素个数] = {{},{},....,{}};



	4、结构体指针

		作用：通过指针访问结构体中的成员；利用操作符 -> 可以通过结构体指针访问结构体属性；

		#include<iostream>
		using namespace std;

		struct Student
		{
			string name;
			int age;
			int score;
		};

		int main()
		{
			// 1、创建学生结构体变量（创建结构体变量时 struct 关键字可以省略）
			struct Student s = { "张三", 18, 100 };


			// 2、通过指针指向结构体变量（strcut 关键字可以省略）
			// 注意：结构体变量 s 是 "struct Student" 数据类型的，而此处定义的指针变量 p 是 int 型的，左右两侧的数据类型不一致，出现语法错误；
			// int* p = &s;
			// 所以，需要将指针变量 p 的数据类型改成与结构体变量 s 相同的数据类型，即结构体特有的 "struct 结构体名" 型数据类型；
			struct Student* p = &s;


			// 3、通过指针访问结构体变量中的数据
			// 不用结构体指针访问；可以直接通过（结构体变量 · 属性）的方式进行访问：s.name 、s.age 、s.score;
			// 通过结构体指针访问结构体中的属性，需要利用操作符 "->"
			cout << "姓名：" << p->name << " 年龄：" << p->age << " 分数：" << p->score << endl;

			system("pause");
			return 0;
		}



	5、结构体嵌套结构体

		作用：结构体中的成员可以是另一个结构体；


		例如：每个老师辅导一个学员，一个老师的结构体中，记录一个学生的结构体。

			#include<iostream>
			using namespace std;

			// 定义学生结构体
			struct student
			{
				string name;
				int age;
				int score;
			};

			// 定义老师结构体
			struct teacher
			{
				// 数据类型 变量名;
				int id;
				string name;
				int age;

				// 结构体嵌套结构体（数据类型 变量名;）（数据类型：struct student）（变量名：stu）
				struct student stu;
			};

			int main()
			{
				// 创建老师
				struct teacher t;
				t.id = 10000;
				t.name = "老王";
				t.age = 50;
				t.stu.name = "小王";
				t.stu.age = 20;
				t.stu.score = 60;

				cout << "老师姓名：" << t.name << " 老师编号：" << t.id << " 老师年龄：" << t.age
					<< " 老师辅导的学生姓名：" << t.stu.name << " 学生年龄" << t.stu.age << " 学生分数：" << t.stu.score << endl;

				system("pause");
				return 0;
			}



	6、结构体做函数参数

		作用：将结构体作为参数向函数中传递；

		传递方式有两种：

			·值传递

			·地址传递

			#include<iostream>
			using namespace std;

			struct Student
			{
				string name;
				int age;
				int score;
			};

			// 形参变量定义：数据类型 变量名;（结构体特有的数据类型：struct Student）（变量名：s）
			void printStudent1(struct Student s)
			{
				s.age = 38;
				cout << "在函数1中打印" << "\t" << "姓名：" << s.name << "\t" << "  年龄：" << s.age << "\t" << "  考试分数：" << s.score << endl;
			}

			// 指针形参变量定义：数据类型 变量名;（结构体指针特有的数据类型：struct Student*）（结构体变量：p）
			void printStudent2(struct Student* p)
			{
				// 通过指针访问结构体成员属性时，需要利用操作符 "->"
				p->age = 50;
				cout << "在函数2中打印" << "\t" << "姓名：" << p->name << "\t" << "  年龄：" << p->age << "\t" << "  考试分数：" << p->score << endl;
			}


			int main()
			{
				// 将结构体做为函数参数，将定义好的结构体变量（学生s）作为参数传入打印函数中，打印学生身上的所有信息；

				struct Student s;
				s.name = "Curry";
				s.age = 35;
				s.score = 100;

				printStudent1(s);
				cout << "在main()函数中" << "\t" << "姓名：" << s.name << "\t" << "年龄：" << s.age << "\t" << " 考试分数：" << s.score << endl;

				// 就是将结构体变量 s 当成普通的变量，地址传递时需要加上地址符 "&"
				printStudent2(&s);
				cout << "在main()函数中" << "\t" << "姓名：" << s.name << "\t" << " 年龄：" << s.age << "\t" << " 考试分数：" << s.score << endl;

				system("pause");
				return 0;
			}



	7、结构体中const使用场景

		作用："const" 关键字常用来限定一个文件的只读状态，防止修改的操作；即使用 "const" 关键字来防止误操作；

			#include<iostream>
			using namespace std;

			struct Student
			{
				string name;
				int age;
				int score;
			};


			void printStudent1(Student s)
			{
				// 值传递的本质：
				// 实参传递的 s 与 形参接收到的 s 并不是同一个 s ，而是把实参中 s 所有的数据 "拷贝" 一份，然后放在形参 s 中；
				// 所以无论子函数中的 s 怎么修改，外部 main() 函数中的 s 数据始终不变；
				// 作为一个结构体变量 s ，其中定义的成员属性是很多的，如果每一次调用实参给形参都 "拷贝" 一份数据，那这数据量是及其庞大的；

				// 所以，怎么做才能更节省空间呢?
				s.age = 28;
				cout << "print函数1中 姓名：" << s.name << " 年龄：" << s.age << " 考试分数：" << s.score << endl;
			}


			void printStudent2(struct Student* s)
			{
				// 问：所以怎么做才能更节省空间呢?
				// 答：将子函数中的形参变量改为指针变量，可以减少内存空间，而且不会复制新的副本出来；
				
				// 注意：只要不在函数中进行修改的操作，就进行只读的操作，指针也是能进行值传递的；
				// 且占用内存空间更少，因为一个指针无论是什么数据类型，在32位操作系统下都只占 4个字节

				// 但是，因为地址传递时，形参会修饰实参，数据会因为误写操作导致实参原有值发生改变，数据的安全性问题得不到保证；
				// 所以，怎么做才能使得地址传递只进行只读操作呢?
				cout << "print函数2中 姓名：" << s->name << " 年龄：" << s->age << " 考试分数：" << s->score << endl;
			}


			void printStudent3(struct Student* s)
			{
				// 当我们只想对结构体中数据进行打印(只读)而不想修改(写)，却因为误操作修改了值时；
				// 例如：s->age = 30; 地址传递导致原结构体中数据发生改变
				s->age = 40;
				cout << "print函数3中 姓名：" << s->name << " 年龄：" << s->age << " 考试分数：" << s->score << endl;
			}


			// 定义形参指针变量时，加入 "const" 关键字
			void printStudent4(const struct Student* s)
			{
				// 问：怎么做才能使得地址传递只进行只读操作呢?
				// 答：加入 const 修饰形参指针变量之后，结构体变量 s 变成了不可被修改的左值，一旦有修改的操作就会报错，可以防止我们的误操作；
				// 此时再对结构体中的数据进行修改时，例如：s->age = 30; 此时的系统就会报错
				// s->age = 30;
				// 此时只能进行 "读" 的操作，而不能进行 "写" 的操作；
				cout << "print函数4中 姓名：" << s->name << " 年龄：" << s->age << " 考试分数：" << s->score << endl;

			}


			int main()
			{
				// 创建结构体变量
				struct Student s = { "Curry", 35, 100 };


				printStudent1(s);
				cout << "main()函数中 姓名：" << s.name << " 年龄：" << s.age << " 考试分数：" << s.score << endl;


				printStudent2(&s);
				cout << "main()函数中 姓名：" << s.name << " 年龄：" << s.age << " 考试分数：" << s.score << endl;


				printStudent3(&s);
				cout << "main()函数中 姓名：" << s.name << " 年龄：" << s.age << " 考试分数：" << s.score << endl;


				// 此时的年龄为什么还是40。是因为在子函数3中已经更改了数据的原因吗?亦或许是变量名相同的原因?
				printStudent4(&s);
				cout << "main()函数中 姓名：" << s.name << " 年龄：" << s.age << " 考试分数：" << s.score << endl;


				system("pause");
				return 0;
			}
*/