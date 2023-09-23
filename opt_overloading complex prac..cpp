#include<iostream>
using namespace std;
class complex{
	
		int real,img;
		
	public:
		complex();
		complex(int,int);
	void display();
	complex operator+(complex&);
	
};
complex::complex()
{
	real=img=0;
	
}
complex::complex(int real,int img)
{
	this->real=real;
	this->img=img;
}
void complex::display()
{
	cout<<"the complex no is "<<real<<"+"<<img<<"i"<<endl;
		
}
complex complex::operator+(complex &c)
{
	complex temp;
	temp.real= this->real+ c.real;
	temp.img= this->img+c.img;
	return temp; 
}
int main()
{
	
	complex c1(1,2);
	complex c2(5,6);
	c1.display();
	c2.display();
	complex c3=c1+c2;
	c3.display();
}
