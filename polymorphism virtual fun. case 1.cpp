#include<iostream>
using namespace std;
class employee
{
	int id;
	public:
		employee();
		employee(int);
		void display();
		int findsalary() // calling all time
		{
			return 0;
		}
};
employee::employee()
{
	id = 0;
}
employee::employee(int i)
{
	id = i;
}
void employee::display()
{
	cout<<"employee id is : "<<id<<endl;
}

class wageemployee : public employee
{
	int hrs,rate;
	public:
		wageemployee();
		wageemployee(int,int,int);
		void display();
		int findsalary();
};
wageemployee::wageemployee()
{
	cout<<"in default of wageemployee \n";
	hrs = 0;
	rate = 0;
}
wageemployee::wageemployee(int i, int h, int r):employee(i)
{
	cout<<"In para of wageemployee \n";
	hrs = h;
	rate = r;
}
int wageemployee::findsalary()
{
	cout<<"wageemployee salary = \n";
	cout<<hrs*rate<<endl;
	return hrs*rate;
}
 void wageemployee::display()
{
	cout<<"Hrs of wage "<<hrs<<endl;
	cout<<"Rate for wage "<<rate<<endl;
}

class salesmanager:public wageemployee
{
	int sales, comm;
	public:
		salesmanager();
		salesmanager(int,int,int,int,int);
		void display();
		int findsalary();
};
salesmanager::salesmanager()
{
	cout<<"in default of salesmanager \n";
	sales = 0;
	comm = 0;
}
salesmanager :: salesmanager (int i,int h,int r,int s,int c) : wageemployee(i, h, r)
{
	this->sales = s;
	this->comm = c;
}
void salesmanager :: display()
{
	wageemployee::display();
	cout<<"Sales and Commision of salesmanager is \n"<<sales<<" & "<<comm<<endl;;
}
int salesmanager :: findsalary()
{
	return (wageemployee::findsalary())+sales*comm;
}

int main()
{
	employee* ptr;
	
	employee e1;
	ptr = &e1;
	cout<<ptr->findsalary();  //
	
	wageemployee we1;
	ptr = &we1;
	cout<<ptr->findsalary();
	
	salesmanager sm1(101,10,500,2000,10);
	ptr = &sm1;
	cout<<ptr->findsalary();
}












