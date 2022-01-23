#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

////全局变量
//int g_a = 10;
//int g_b = 10;
//
////const修饰的全局,全局常量
//const int c_g_a = 10;
//const int c_g_b = 10;
//int main()
//{
//
//	//局部变量
//	int a = 10;
//	int b = 10;
//	cout << "局部变量a的地址：" << &a << endl;
//	cout << "局部变量b的地址：" << &b << endl;
//
//	//全局变量
//	cout << "全局变量g_a的地址：" << &g_a << endl;
//	cout << "全局变量g_b的地址：" << &g_b << endl;
//	
//	//静态变量
//	static int s_a = 10;
//	static int s_b = 10;
//	cout << "静态变量s_a的地址：" << &s_a << endl;
//	cout << "静态变量s_b的地址：" << &s_b << endl;
//	
//	//常量--字符串" "引起来的、const修饰的全局、局部变量
//	cout << "     字符串的地址："<< & "hello world" << endl;
//
//	//const修饰的全局
//	cout << "全局常量c_g_a的地址：" << &c_g_a << endl;
//	cout << "全局常量c_g_b的地址：" << &c_g_b << endl;
//	
//	//const修饰的局部
//	const int c_l_a = 10;//c-const l-local (g-global)
//	const int c_l_b = 10;
//	cout << "局部常量c_l_a的地址：" << &c_l_a << endl;
//	cout << "局部常量c_l_b的地址：" << &c_l_b << endl;
//
//	system("pause");
//	return 0;
//}

////栈区的注意事项---不要返回局部变量地址
////栈区的数据由编译器管理开辟和释放
//
//int* func(int b)//形参也放在栈区
//{
//  b=100;
//	int a = 10;//局部变量存放在栈区，栈区数据执行完自动释放
//	return &a;//非法操作
//}
//
//int main()
//{
//	int* p = func(1);
//	cout << *p << endl;//第一次做了保留
//	cout << *p << endl;//第二次不保留
//	system("pause");
//	return 0;
//}

//int* func()
//{
//	//利用new关键字，将数据开辟到堆区
//	//指针本质上也是局部变量，放在栈上，指针保存的数据放在堆上
//	int* p = new int(10);
//	return p;
//}

//int* func()
//{
//	int* p = new int(10);//()变量
//	return p;
//}
//void test01()
//{
//	int* p = func();
//	cout << *p << endl;//堆区数据由程序员管理释放，如果释放用关键字delete
//	delete p;
//}
//
//void test02()
//{
//	//创建10个整型数据数组
//	int* arr = new int[10];//十个元素
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i + 100;//100-109
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		cout<<arr[i]<<" ";//100-109
//	}
//	//释放数组要加[]
//	delete[] arr;
//}
//int main()
//{
//	//堆区开辟数据
//	/*int* p = func();
//	cout << *p << endl;*/
//	test02();
//	system("pause");
//	return 0;
//}

//int main()
//{
//	//引用基本语法
//	//数据类型 &别名=原名
//	int a = 10;
//	int& b = a;//引用必须初始化且不可改变
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//
//	b = 100;
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//	system("pause");
//	return 0;
//}


////交换函数--引用传递
//void swap(int& a, int& b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(a, b);//引用传递，也改变实参
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//	system("pause");
//	return 0;
//}


////函数的调用可以作为左值
//int& test01()
//{
//	static int a = 10;//全局区--程序结束后系统释放
//	return a;
//}
//int main()
//{
//	int& ref = test01();//ref是a的别名
//	cout << "ref=" << ref << endl;
//	test01() = 100;//函数返回值是引用则可作为左值
//	cout << "ref=" << ref << endl;
//	system("pause");
//	return 0;
//}

////引用的本质是指针常量,一旦初始化就不能改变
//int main()
//{
//	int a = 10;
//	int& ref = a;//=int* const ref=&a；指针常量(指向不能变，值可变)
//	ref = 20;//ref=a；
//	cout << "a=" << a << endl;
//	cout << "ref=" << ref << endl;
//	system("pause");
//	return 0;
//}

//打印数据
void showValue(const int &val)
{
	cout << "val="  << val << endl;
}
int main()
{
	//常量引用，用来修饰形参，防止误操作
	//int a = 10;
	//加上const，int tmp=10;int&ref=tmp;值不可修改,为只读模式
	//const int& ref = 10;//引用必须引用一块合法的内存空间
	
	int a = 100;
	showValue(a);
	cout << "a=" << a << endl;

	system("pause");
	return 0;
}