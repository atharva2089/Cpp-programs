#include<iostream>
using namespace std;

int main()
{
	int base,expo, power=1;
	cout<<"the base number and expo num "<<endl;
	cin>>base>>expo;
	for(int i=1; i<=expo;i++)
	{
		power=power*base;
	}
	
	cout<<"power of  number is "<<power<<endl;
}
