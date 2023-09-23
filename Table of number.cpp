#include<iostream>
using namespace std;

int main()
{
	int num,i,j;
	cout<<"enter the number for printing the table"<<endl;
	cin>>num;
	for(i=1;i<=10;i++)
	{
	
	for(j=1;j<11;j++)
	{
		cout<<i<<"*"<<j<<"="<<"\t"<<i*j<<endl;
	
	}
	cout<<endl;
}

}
