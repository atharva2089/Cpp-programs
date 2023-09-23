#include<iostream>
using namespace std;
class complex
{
	int real,img;
	public:
		complex();
		complex(int,int);
		void display();
		complex operator-(complex&c);
	
};
complex::complex()
{
	real,img=0;
}
complex::complex(int real,int img)
{
	this->real=real;
	this->img=img;
}
void complex::display()
{
	if(img>0)
	cout<<"complex number is "<<real<<"+"<<img<<"i"<<endl;
	else
	cout<<"complex number is "<<real<<img<<"i"<<endl;
}
complex complex::operator-(complex &c)
{
	complex temp;
	temp.real=this->real-c.real;
	temp.img=this->img-c.img;
	return temp;
}
int main()
{
	complex c1(1,4);
	complex c2(5,1);
	complex c3=c2-c1;
	c3.display();
}
