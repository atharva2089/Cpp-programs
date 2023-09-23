#include<iostream>
using namespace std;
class Employee{
	int emp_id;
	int mob_num;
	public:
		void display1(){
			cout<<"outer class is called"<<endl;
		}
		public:
		class salary{
			int sal;
			public:
				
				void display(){
//					cout<<"employee id is"<<emp_id<<endl;
					cout<<"inner class is called"<<endl;
				}
			
		};
};


int main(){
	Employee e1;
	e1.display1();

	Employee::salary s1;
	s1.display();


	
}
