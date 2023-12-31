/*

函数

	概述：
	
		将一段经常使用的代码封装起来，减少重复代码；一个较大的程序，一般分为若干个程序块，每个模块实现特定的功能。



	1、函数的定义

		函数的定义一般分为五个步骤：

			1.返回值类型				int
			2.函数名					add
			3.参数列表					(int num1,int num2)	—— 这里的 num1 和 num2 并没有实际的值，只是一个形式上的参数，简称形参；
			4.函数体语句				int sum = num1 + num2;
			5.return 表达式				return sum;	（和返回值类型挂钩，函数执行完后，返回相应的数据类型返回值）
													（当返回值类型为 void 时，此时函数没有返回值；return 表达式 可以直接写成 return；或者不写 return 表达式）
	


	2、函数的调用

			功能：使用定义好的函数；

			语法：定义的函数名(实际参数 —— 实参)；例如：add(a, b); —— 这里的 a 和 b 称为实际参数，简称实参；



	3、值传递

		概述：

			所谓值传递，就是函数调用时，实参将数值传递给形参；值传递时，如果形参发生改变（例如两个形参交换），其最终结果并不会影响实参。

		
		注意：
		
			值传递时，形参是修饰不了实参的！！！为什么呢? 以下面代码为例：

					void swap(int num1, int num2)
					{
						int temp = num1;
						num1 = num2;
						num2 = temp;
					}

					int main()
					{	
						int a = 10;
						int b = 20;

						swap(a, b);

						system("pause");
						return 0;
					}

			·首先，程序从主函数 main() 开始执行；

					执行 int a = 10; 当创建一个 int 数据类型的变量 a 时，内存上会开辟 4个字节 给这个变量 a 进行存放；
					执行 int b = 20; 当创建一个 int 数据类型的变量 b 时，内存上会开辟 4个字节 给这个变量 b 进行存放；


			·其次，程序执行到 swap(a, b) 时，会将实参 a、b 传入给形参变量 num1、num2；

					num1、num2 也是要分配内存空间的，因为 num1、num2 和 a、b 是不相同的变量，它们并不等价为同一个数据；
					int num1 = a = 10; 当创建一个 int 数据类型的变量 num1 时，内存上也会开辟 4个字节 给这个变量 num1 进行存放；
					int num2 = b = 20; 当创建一个 int 数据类型的变量 num2 时，内存上也会开辟 4个字节 给这个变量 num2 进行存放；


			·再者，int temp; 当创建一个 int 数据类型的变量 temp 时，内存上也会开辟 4个字节 给这个变量 temp 进行存放；


			·最后，int temp = num1;  等价于 temp = 10
						num1 = num2;  等价于 num1 = 20
						num2 = temp;  等价于 num2 = 10


			·所以，程序从开始执行到结束过程中，a、b 的值都没有发生过改变，而 num1、num2 的值发生了交换，且 temp 的值依旧不变；


			·总结：
					各自的形参在接受到实参传递过来的数值时，也会各自开辟一个新的存储空间用于存储数据，而不会去覆盖实参原有的空间；
					形参的值相互交换时，实际上是在自己新开辟的存储空间内进行交换，与实参的存储空间并没有相互关联和联系；
					所以形参发生交换时并不会影响到实参的值。



	4、函数的常见样式
	
		1.无参无返
		2.有参无返
		3.无参有返
		4.有参有返



	5、函数的声明
	
		概述：函数的声明在函数的定义之前；

		作用：告诉编译器函数的名称以及如何调用函数，函数的实际主体可以单独定义；
		  
		注意：函数的声明可以多次，但是函数的定义只能有一次；


		为什么要进行函数的声明?
		
			答：因为执行代码语句时，编译器是从上到下依次执行的，如果把自定义的函数放在 main()函数 的下方时，

				会使得编译器找不到 main()函数 中所调用的函数，导致报错；

				如果提前在 main()函数 的上方声明函数的存在，这时候把自定义的函数放在 main()函数 的下方也是可以执行的。



	6、函数的分文件编写
	
		作用：让代码结构更清晰；

		函数的分文件编写一般有四个步骤：

			1.创建后缀名为 .h 的头文件

			2.创建后缀名为 .cpp 的源文件

			3.在头文件中写函数的声明

			4.在源文件中写函数的定义

			5、还需要将 .h 的头文件与 .cpp 的源文件 与 主函数进行关联，在 .cpp 的源文件中添加头文件 #include"swap.h"（自定义的 .h 头文件）

			6、在 .h 的头文件中添加头文件 #include<iostream> 以及 using namespace std;

			7、最后在主程序文件中添加自定义的 .h 头文件即可，即添加 #include"swap.h"

*/