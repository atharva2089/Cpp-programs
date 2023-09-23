#include <iostream>
using namespace std;
inline int square(int s){
	return s*s*s;
}
//inline int Max(int x, int y) {
//   return (x > y)? x : y;



int main() {
	int s;
	cout<<"enter number= "<<endl;
	cin>>s;
	cout<<"cube of number is ="<<square(s)<<endl;
//   cout << "Max (20,10): " << Max(20,10) << endl;
//   cout << "Max (0,200): " << Max(0,200) << endl;
//   cout << "Max (100,1010): " << Max(100,1010) << endl;
   
   return 0;
}
