#include <iostream>
using namespace std;

class Student
{
	int m1,m2;
	public:
		int add;
		void getMarks()
		{
			cout<<"Enter marks 1 : ";
			cin>>m1;
			cout<<"Enter marks 2  : ";
			cin>>m2;
		}
		void displayMarks()
		{
			 add = m1+m2;
		}
};

class Sportsmarks
{
	public :
		int sm;
		void getSmarks()
		{
			cout<<"Enter marks for sports : ";
			cin>>sm;
		}
};

class Result: public Student, public Sportsmarks
{
	float avg;
	int total;
	
	public:
		void displayAvg()
		{
			Student::getMarks();
			Sportsmarks::getSmarks();
			Student::displayMarks();
			total=(add+sm);
			avg=float(total/3);
			cout<<"Avg of student is: "<<float(avg);
		}
};

 int main(){
 	
 	Result r;
 	r.displayAvg();
 	
 }
