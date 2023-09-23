#include<stdio.h>
void ustrlen(char*,int*);
int main()
{
	char a [20];
	int i=0;
	printf("enter the name:");
	scanf("%s",a);
	printf("\nprinting string:%s",a);
	ustrlen(a,&i);
	printf("\nlength:%d",i);
	return 0;
}
void ustrlen(char*p,int*q)
{
	
	while(p[*q]!='\0')
	{
		*q=*q+1;
	}	
}
