#include<iostream>
using namespace std;

int main()
{
	int n,i;
	cout<<"enter the number ";
	cin>>n;
	
	for(i=2;i<n/2;i++)
	{
		if(n/i==0)
		{
			cout<<"The given number is not prime ";
		}
		else if(n/i!=0)
		{
			cout<<"The given number is prime ";
		}
	}
}
