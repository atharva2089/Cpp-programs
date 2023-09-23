#include<iostream>
using namespace std;
#include<string.h>


class string1
{
	int len;
	char *ptr;
	public:
	string1(char*); //const
	void stringdisplay();
	~string1(); //dist
	string1(string1 &); //cpy
};
void string1:: stringdisplay()
{
	cout<<"length is  "<<len<<endl; //5
	cout<<"string is  "<<ptr<<endl;  //rahul
};
string1:: string1(char* sptr)  // sptr=rahul = length=5
{
	len=strlen(sptr); //5
	ptr=new char[len+1];
	strcpy(ptr,sptr); //sptr --->ptr.
}
string1:: ~string1()
{
	cout<<"destructor is called\n"<<endl;  //first print
	if(ptr)
	delete[]ptr; // delete operator expli calling dist 
	ptr=NULL;
}
string1:: string1(string1 &c)
{
	this->len=c.len;
	this->ptr=new char[len+1];
	strcpy(this->ptr,c.ptr);
}
int main()
{
	string1 c2("rahul");
	c2.stringdisplay();
	{
		string1 c3(c2); //cpy const c3=this  
		c3.stringdisplay();
		c3.~string1(); //dist call
	}
	c2.stringdisplay();
	
}
