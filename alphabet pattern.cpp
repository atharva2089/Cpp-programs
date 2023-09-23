#include<iostream>
using namespace std;
int main()
{
	int row,col;
	char c='A';
	for(row=1;row<=5;row++)
	{
		for(col=1;col<=row;col++)
		{
			cout<<c;
			
		}
		
		cout<<c++<<"\n";
	}
	
	
}
