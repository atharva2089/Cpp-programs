#include<iostream>
using namespace std;
class student
{
	char str [10];
	char str1 [10];
	
	public:
		void display();
		void getstr();
};
void student::display()
{
	cout<<"string copy is "<<endl;
}

void student::getstr()
{
	cout<<"enter the string "<<endl;
	cin>>ptr;
}
int main()
{
	student s1;
	s1.getstr();
	s1.display();
}
