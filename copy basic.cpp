#include<iostream>
using namespace std;
class complex{
	int real,img;
	public:
		complex (int,int);
		void show()
		{
			cout<<real<<"+"<<img<<"i"<<endL;
		}
};
complex::complex(c1,c2) 
{
	real=c1;
	img=c2;
}
void int::show
