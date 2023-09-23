#include<stdio.h>
void ustrcpy(char*p,char*q);
int main()
{
	char a [20],b[20];
	printf("enter the name:");
	scanf("%s",a);
	printf("\nprinting:%s",a);
	ustrcpy(a,b);
	printf("\ncoping a into b:%s",b);
	return 0;
}
void ustrcpy(char*p,char*q)
{
	int i=0;
	while(p[i]!='\0')
	{
		q[i]=p[i];
		i++;
	}	
	q[i]='\0';
}
