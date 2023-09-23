#include<iostream>
using namespace std;
class date{
	int dd,mm,yy;
	public:
		void show();

		date (int,int,int);
		date(date &); //declartion 
	
};
date::date(int d,int m,int y)
{
	dd=d;
	mm=m;
	yy=y; 
}
void date::show()
{
	cout<<"data is"<<dd<<"/"<<mm<<"/"<<yy<<endl;
}
date::date(date &d_new)
{
	this->dd=d_new.dd;
	this->mm=d_new.mm;
	this->yy=d_new.yy;
}

int main()
{
	date d(8,9,17);
	date d1 (d);
	d.show();
	d.show();
}
