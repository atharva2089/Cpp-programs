#include<iostream>
using namespace std;

int main()
{
	int fact=1,i=1,num;
	cout<<"enter the number";
	cin>>num;
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
		
	}
	cout<<"Factorial of number is  "<<fact<<endl;
}
