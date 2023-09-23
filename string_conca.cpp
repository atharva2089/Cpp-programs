#include<stdio.h>
//using namespace std;
#include<string.h>

void concatnate(char*,char*);
int main()
{
	char a [10],b[10];
	printf("enter the name:");
	scanf("%s%s",a,b);
	concatnate(a,b);
	printf("result string is :%s",a);
	return 0;
}
void concatnate(char*p,char*q)
{
  while(*p!='\0'){
   	p++;
   }
  while(*q!='\0'){
  	 *p=*q;
   	 p++;
  	 q++;
  }
 
}
