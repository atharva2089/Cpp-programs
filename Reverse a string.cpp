#include<stdio.h>
#include<string.h>
int main()
{
	//char st[] = "HELLO WORLD";
	char st[20];
	char tt[20];
	int len; int i=0;
	printf("Enter a String\n",st);
	scanf("%s",&st);
	len = strlen(st);
	printf("%d",len);
	len--;
	while(len>=0)
	{
	tt[i] = st[len] ;
	i++;
	len--;
    }
	printf(" \nRevers Sting is %s ",tt);
}
	

