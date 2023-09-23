/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
using namespace std;
class shape       
{

	int width;

public:
	shape()
	{
	}

	 virtual int findarea()=0;
};
class square:public shape
{   int  a;
	public:
	
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
class line:public shape
{
	int a,b;
	public:
		line(int a,int b)
		{
			cout<<"the start point of the line is"<<a;
			cout<<"the end point of the line is"<<b;
		}
		
};

class ellipse:public shape
{
	int a;
	public:
	ellipse(int l,int h)
	{
	   cout<<"the point of circle is "<<a;
       cout<<"the length of the ellipse is"<<a;
    }

};

class circle:public shape
{
	public:
		int r;
	double pi = 3.14;
	circle(int r)
	{
		this ->r=r;
		
    }
    int findarea()
	{
		return pi*r*r ;
	}
};
int main()
{
	int z;
	cout<<"enter the choice "<<endl;
	cin>>z;
	
	switch(z)
	{
		case 1:
			cout<<"You are in square "<<endl;
			shape * ptr= new square(3);
			cout<<"area of square :"<<ptr->findarea()<<endl;
			break;
			
			
		case 2:
			cout<<"You are in rectangle "<<endl;
			ptr= new rectangle(5,3);
	        cout<<"area of rectangle :"<<ptr->findarea();
			break;
			
			
		case 3:
			cout<<"You are in line "<<endl;
			ptr= new line(0,5);
			cout<<"co ordinate points of line :" ;<<(0,5);
			break;
		case 4:
			cout<<"You are in ellipse "<<endl;
			break;
		case 5:
			cout<<"You are in circle "<<endl;
			ptr= new circle(5);
	        cout<<"area of circle :"<<ptr->findarea();
			break;
			
			
	}
}




