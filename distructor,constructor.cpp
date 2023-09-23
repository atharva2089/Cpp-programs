#include<iostream>
using namespace std;
class A
{
	public:
		A(){
			cout<<"in a constructor \n";
		}
		~A(){
			cout<<"in a destructor ";
		}
};
class B : public A
{
	public :
		B(){
			cout<<"in b constructor \n";
		}
		~B(){
			cout<<"in b destructor";
		}
};
int main(){
	
	B b;
	b.~A();
}
