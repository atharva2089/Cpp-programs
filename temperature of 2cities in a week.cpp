#include<iostream>
using namespace std;
int main()
{
	int temperature[2][7];
	int i,j;
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=6;j++)
		{
			cout<<"city="<<i+1<<"day="<<j+1<<endl;
			cin>>temperature[i][j];
		}
	}
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=6;j++)
		{
			cout<<"city="<<i+1<<"day="<<j+1<<"="<<temperature[i][j]<<endl;
		
		}
	}
	cout<<"\n****************************\n";
	
	
	
}
