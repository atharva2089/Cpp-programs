#include<iostream>
using namespace std;
class shape
{

public:
	shape(){
			cout<<"You are in default shape \n";
	}

	 virtual int findarea()=0;
};
class square:public shape
{   int  a;
	public:
		square()
		{
		
			cout<<"You are in default square \n";	
		}
		square(int a)
		{
			this ->a=a;
		}
		int findarea()
		{
			return a*a;
		}
};
class rectangle:public shape
{   int  a,b;
	public:
		rectangle()
		{
		
			cout<<"You are in default rectangle \n";	
		}
		rectangle(int a,int b)
		{
			this ->a=a;
			this ->b=b;
		}
		int findarea()
		{
			return a*b;
		}
};
int main()
{
	shape * ptr= new square(3);
	cout<<"area of square"<<ptr->findarea()<<endl;
	ptr= new rectangle(5,3);
	cout<<"area of rectangle :"<<ptr->findarea();
}



