#include<iostream>
using namespace std;
class student
{
		///1.1构造函数
		//没有返回值但是不用写void
		//函数名字与类名相同
		//构造函数可以有参数，因此可以重载
		//创建对象的时候构造函数自动调用且只调用一次
	public:
		student()
		{
			cout<<"构造函数调用"<<endl;
		}
      ///2.析构函数 进行清理的操作
	  //没有返回值 不写void
	  //函数名和类相同 在名称前加 ~
	  // 析构函数没有参数，因此不能发生重载
	  //对象在销毁前辉自动调用析构函数，而且只会调用一次 
	  ~student()
	  {
	  	cout<<"student 的析构函数调用"<<endl; 
	  }
};//构造和析构都是必须实现的，如果不实现，为空 
void test01()
{
	student p;
}
int main()
{

	//test01();
	student p; 

	return 0;
}
