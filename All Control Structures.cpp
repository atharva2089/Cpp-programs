//Lab 3
#include<iostream>
using namespace std;

int main()
{
int option;
cout<<"Enter Choice \n"<<" 1.If-Else\t 2.For Loop\t 3. While Loop\t 4.Do-While Loop\n";
cin>>option;
switch(option)
{

	case 1:
//		bool flag=true;
//		if(flag==true)
//		{
//			cout<<"True";
//		}
//		else
//		{
//			cout<<"False";
//		}
	break;
	case 2:
	int num;
	cout<<"Enter a number for Printing a Table ";
	cin>>num;
	for(int i=1;i<=10;i++)
	{
		cout<<num<<"*"<<i<<"="<<num*i<<"\n";
	}
	break;
	case 3:
//	int	n,i=3;
//	int n1=0,n2=1,n3;
//	cout<<"Enter no. Of terms \n";
//	cin>>n;
//	cout<<n1<<"\t"<<n2<<"\t";
//	while(i<=n)
//	{
//		n3=n1+n2;
//		cout<<n3<<"\t";
//		n1=n2;
//		n2=n3;
//		i++;
//	}
	break;
	case 4 :
		int sum=0,number;
			cout<<"Enter Number";
			cin>>number; 
		do
		{
			sum = sum + number;
			number--;
		}while(number!=0);
		cout<<sum;
		break;
}
}
