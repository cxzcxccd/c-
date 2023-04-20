#include<iostream>
using namespace std;
//1 构造函数的分类以及调用
//分类
//有参构造 无参构造
// 普通构造 拷贝构造
class student
{

	public:
		//构造函数
		int age;
		student(int a)
		{
			age=a;
			cout<<"构造函数调用"<<endl;
		}
		student()
		{
			cout<<"无参构造函数调用"<<endl;
		}
		~student()
		{
			cout<<"student 的析构函数调用"<<endl;
		}
		//拷贝构造函数
		student (const student &p)
		{
			cout<<"拷贝函数的调用"<<endl;
			age=p.age;

		}
};//构造和析构都是必须实现的，如果不实现，为空
void test01()
{
	//注意事项
	//调用默认构造函数不要加（）
	student p;
	student p2(10);
	student p3(p2);
	cout<<p2.age<<" "<<p3.age<<endl;
	/******************************/
	student p4;
	student p5=student(10); //有参
	student p6=student(p5);//拷贝
	/*************************/
	student(100);//匿名对象用完就没
	 /***************************/
	 student p6=p2;
}
int main()
{

	test01();
	return 0;
}
