//MULTIPLE INHERITANCE


#include<iostream>
using namespace std;
class a
{
	int p;
public:
	
	
};
class b:public a
{
	int q;
public:
	b()
	{
		cout<<"in default of b class\n";
	}
};
class c:public a
{
	int r;
public:
	c()
	{
		cout<<"in default of c class\n";
	}
};
class d:public b,public c
{
	int s;
public:
	d()
	{
		cout<<"in default of d class\n";
	}
};
int main()
{
	d obj;
}

