/*  

数据类型：C++ 规定在创建一个变量或者常量时，必须要指出相应的数据类型，否则无法给变量分配内存；

数据类型存在的意义：给变量分配合适的内存空间；（避免内存空间的浪费，根据数据类型的不同来分配合适的空间大小，例如 int 占4个字节的内存空间，就分配4个字节的内存空间）

注意（总结）：
	·使用 整型数据类型(例如 int) 定义小数时，并不会报错，运行后的结果为定义小数的整数值部分
	·使用 浮点型数据类型 (例如 float) 定义一个大于7位有效数字的小数时，运行后的结果会在有效数字的最后一位四舍五入后显示



1、整型：

	有以下几种方式，区别在于各自所占内存空间大小不同，short < int <= long < long long；

	数据类型            占用空间		取值范围
	short(短整型)        2字节			（-2的15次方 —— 2的15次方-1）（-32768 —— 32767） 当short a = 32768 时，显示的值是错误的，因为超过了最大取值范围
	int(整型)            4字节			（-2的31次方 —— 2的31次方-1）
	long(长整型)         Windows中：x86、x64都占4字节；Linux中：4字节(32位 -- x86)、8字节(64位 -- x64)；
	long long(长长整型)  8字节			（-2的63次方 —— 2的63次方-1）



sizeof关键字：

	作用：可以统计数据类型所占内存大小
	语法：sizeof(数据类型 或者 变量);



2、实型（浮点型）：

	浮点型变量分为以下两种，区别在于表示的有效数字范围不同；

	单精度float         x86、x64都占4字节			7位有效数字		(3.14-表示3位有效数字，0.0314-表示3位有效数字)
	双精度double		x86、x64都占8字节			15-16位有效数字

	注意：
		
		1、当编译器看到小数数字时，例如3.14，编译器会默认3.14为double类数据类型，而不是float类；即编译器会默认将小数当作double类数据类型；
		2、如果在小数后面加上f，例如3.14f，编译器就会知道这个小数为float类数据类型；所以可以这样定义float类的数据类型：float f1 = 3.14f;
		3、默认情况下，float、double类数据类型的输出最多显示6位有效数字，有效数字即除0外的数字且包含小数点的前后；
		4、当小数点前面为0的时候，0算有效数字吗（不算），例如 float f1 = 0.03456789; 输出为：0.0345679（有效数字为345679，因为默认最多显示6位有效数字，最后一位有效数字会根据四舍五入原理进行加一或不变）



科学计数法：

	3e2 —— 表示的是 3*10的二次方；3e-2 —— 表示的是 3*10的负二次方



3、字符型char：

	作用：用于显示单个字符；
	语法：char ch = 'a';

	注意：
		
		1、在显示字符型变量时，用单引号将字符括起来，不要用双引号；
		2、单引号内只能有一个字符，不可以是字符串；
		3、C 和 C++ 中字符型变量只占用1个字节；
		4、字符型变量并不是把字符本身放到内存中存储，而是将对应的ASCLL编码放入到存储单元；（a-97  A-65）
		5、如何输出字符型变量对应的ASCLL值，例如：char ch = 'a'; cout << (int)ch << endl; 即使用强转命令输出；
		6、因为计算机不能识别十进制数据（例如1，2....），只能识别二进制数据（例如01，00），所以需要十进制数据转化成二进制数据；



转义字符：

	作用：用于表示一些不能显示出来的ASCLL字符

	语法：
		
		1、\n —— 换行，例如：cout << "hello world" << endl; 其中"endl"命令代表换行命令，也可以写成：cout << "hello world\n"; 也代表换行；
		2、\\ —— 输出一个反斜线字符"\"，例如：cout << "\\" << endl; 代表输出一个反斜杠"\"，输出几个依次类推；
		3、\t —— 水平制表符；作用是可以整齐的输出数据，水平制表符一共占8个空格位置，例如：cout << "aaa\thelloworld" << endl; 输出显示，aaa和helloworld之间空了5个空格的位置；



4、字符串型：

	用于表示一串字符；

	两种风格：

		1、C 风格字符串：char 变量名[] = "字符串";
		2、C++ 风格字符串：string 变量名 = "字符串";（需要包含头文件 #include <string> 才能正常使用）



5、布尔类型bool：

	作用：代表真或假的值，bool数据类型只占一个字节；

	bool类型只有两个值：

		1、true —— 真(本质是1，即结果输出是1)；bool数据类型中，只要是非0的值都代表真，即1，2，3...都为真，只有0为假；
		2、false —— 假(本质是0，即结果输出是0)；



数据的输入（cin）：

	作用：用于从键盘获取数据；
	语法：cin >> 变量;

*/