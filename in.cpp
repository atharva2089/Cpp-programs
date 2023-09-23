#include <iostream>
using namespace std;

inline int cube(int side)
{
   int a;
   a=side*side*side;
   return a;
}


int main()
{
	int cube(5);
	cout<<"the cube of number is "<<cube(5);

}
