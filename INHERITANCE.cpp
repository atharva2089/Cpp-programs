#include<iostream>
using namespace std;
class employee
{
	int id;
	public:
		employee();
		employee(int);
		void display();
		int findsalary()
		{
			return 0;
		}
};
employee::employee()
{
cout<<"default \n";
id=0;
}
employee::employee(int i)
{
	id=i;
	cout<<"employee Id is:"<<id<<endl;
}
void employee :: display()
{
	cout<<"Id of employee is:"<<id<<endl;
}


class wageemployee:public employee
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
	cout<<"In default of wage\n";
	hrs=0;
	rate=0;
}
wageemployee::wageemployee(int i,int h,int r):employee(i)
{
	cout<<"In para of wage \n";
	hrs= h;
	rate= r;
}

int wageemployee::findsalary()
{
	return hrs*rate;
}

void wageemployee::display()
{
	employee::display();
	cout<<"working of hrs:" <<hrs<<endl;
	cout<<"rate of work:"<<rate<<endl;
}
class salesmanager:public wageemployee
{
	int sales,comm;
	public:
		salesmanager();
		salesmanager(int,int,int,int,int);
		void display();
		int findsalary();
};

salesmanager::salesmanager(int i,int h,int r,int s,int c):wageemployee(i,h,r)
{
	cout<<"in para of sales\n";
	sales=s;
	comm=c;
	
}
salesmanager::salesmanager()
{
	cout<<"In default of sales \n";
	sales=comm=0;
}

void salesmanager :: display()
{
	wageemployee :: display();
	cout<<"sales of an employee is:"<<sales<<endl;
	cout<<"comission of an employee is:"<<comm<<endl;
}
int salesmanager::findsalary()
{
	return(wageemployee::findsalary())+sales*comm;
}
int main()
{
	salesmanager*sm=new salesmanager(101,10,500,2000,5);
	sm->display();
	cout<<"salary of Emp Is:"<<sm->findsalary()<<endl;
	if(sm)
	delete sm;
	cout<<"salary is after DMA delete:"<<sm -> findsalary();
}
