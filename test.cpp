#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

////ȫ�ֱ���
//int g_a = 10;
//int g_b = 10;
//
////const���ε�ȫ��,ȫ�ֳ���
//const int c_g_a = 10;
//const int c_g_b = 10;
//int main()
//{
//
//	//�ֲ�����
//	int a = 10;
//	int b = 10;
//	cout << "�ֲ�����a�ĵ�ַ��" << &a << endl;
//	cout << "�ֲ�����b�ĵ�ַ��" << &b << endl;
//
//	//ȫ�ֱ���
//	cout << "ȫ�ֱ���g_a�ĵ�ַ��" << &g_a << endl;
//	cout << "ȫ�ֱ���g_b�ĵ�ַ��" << &g_b << endl;
//	
//	//��̬����
//	static int s_a = 10;
//	static int s_b = 10;
//	cout << "��̬����s_a�ĵ�ַ��" << &s_a << endl;
//	cout << "��̬����s_b�ĵ�ַ��" << &s_b << endl;
//	
//	//����--�ַ���" "�������ġ�const���ε�ȫ�֡��ֲ�����
//	cout << "     �ַ����ĵ�ַ��"<< & "hello world" << endl;
//
//	//const���ε�ȫ��
//	cout << "ȫ�ֳ���c_g_a�ĵ�ַ��" << &c_g_a << endl;
//	cout << "ȫ�ֳ���c_g_b�ĵ�ַ��" << &c_g_b << endl;
//	
//	//const���εľֲ�
//	const int c_l_a = 10;//c-const l-local (g-global)
//	const int c_l_b = 10;
//	cout << "�ֲ�����c_l_a�ĵ�ַ��" << &c_l_a << endl;
//	cout << "�ֲ�����c_l_b�ĵ�ַ��" << &c_l_b << endl;
//
//	system("pause");
//	return 0;
//}

////ջ����ע������---��Ҫ���ؾֲ�������ַ
////ջ���������ɱ����������ٺ��ͷ�
//
//int* func(int b)//�β�Ҳ����ջ��
//{
//  b=100;
//	int a = 10;//�ֲ����������ջ����ջ������ִ�����Զ��ͷ�
//	return &a;//�Ƿ�����
//}
//
//int main()
//{
//	int* p = func(1);
//	cout << *p << endl;//��һ�����˱���
//	cout << *p << endl;//�ڶ��β�����
//	system("pause");
//	return 0;
//}

//int* func()
//{
//	//����new�ؼ��֣������ݿ��ٵ�����
//	//ָ�뱾����Ҳ�Ǿֲ�����������ջ�ϣ�ָ�뱣������ݷ��ڶ���
//	int* p = new int(10);
//	return p;
//}

//int* func()
//{
//	int* p = new int(10);//()����
//	return p;
//}
//void test01()
//{
//	int* p = func();
//	cout << *p << endl;//���������ɳ���Ա�����ͷţ�����ͷ��ùؼ���delete
//	delete p;
//}
//
//void test02()
//{
//	//����10��������������
//	int* arr = new int[10];//ʮ��Ԫ��
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i + 100;//100-109
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		cout<<arr[i]<<" ";//100-109
//	}
//	//�ͷ�����Ҫ��[]
//	delete[] arr;
//}
//int main()
//{
//	//������������
//	/*int* p = func();
//	cout << *p << endl;*/
//	test02();
//	system("pause");
//	return 0;
//}

//int main()
//{
//	//���û����﷨
//	//�������� &����=ԭ��
//	int a = 10;
//	int& b = a;//���ñ����ʼ���Ҳ��ɸı�
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//
//	b = 100;
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//	system("pause");
//	return 0;
//}


////��������--���ô���
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
//	swap(a, b);//���ô��ݣ�Ҳ�ı�ʵ��
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//	system("pause");
//	return 0;
//}


////�����ĵ��ÿ�����Ϊ��ֵ
//int& test01()
//{
//	static int a = 10;//ȫ����--���������ϵͳ�ͷ�
//	return a;
//}
//int main()
//{
//	int& ref = test01();//ref��a�ı���
//	cout << "ref=" << ref << endl;
//	test01() = 100;//��������ֵ�����������Ϊ��ֵ
//	cout << "ref=" << ref << endl;
//	system("pause");
//	return 0;
//}

////���õı�����ָ�볣��,һ����ʼ���Ͳ��ܸı�
//int main()
//{
//	int a = 10;
//	int& ref = a;//=int* const ref=&a��ָ�볣��(ָ���ܱ䣬ֵ�ɱ�)
//	ref = 20;//ref=a��
//	cout << "a=" << a << endl;
//	cout << "ref=" << ref << endl;
//	system("pause");
//	return 0;
//}

//��ӡ����
void showValue(const int &val)
{
	cout << "val="  << val << endl;
}
int main()
{
	//�������ã����������βΣ���ֹ�����
	//int a = 10;
	//����const��int tmp=10;int&ref=tmp;ֵ�����޸�,Ϊֻ��ģʽ
	//const int& ref = 10;//���ñ�������һ��Ϸ����ڴ�ռ�
	
	int a = 100;
	showValue(a);
	cout << "a=" << a << endl;

	system("pause");
	return 0;
}