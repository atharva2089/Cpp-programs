#include<iostream>
#include<math.h>
using namespace std;

int main()
{
   float p,r,n,fa;
   float CI;
   cout<<"value of p"<<endl;	
   cin>>p;
   cout<<"value of r"<<endl;
   cin>>r;
   cout<<"value of n"<<endl;
   cin>>n;
   
   fa= p * (pow( (1+r/100),n));
   CI= fa -p;
   
   cout<<"compound intrest is  "<<CI<<endl;
   
   
   
}


