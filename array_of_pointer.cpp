#include<iostream>
using namespace std;
int main(){
	int num[5];
	int *ptr[5];
	cout<<"enter five numbers"<<endl;
	for(int i=0;i<5;i++){
		cin>>num[i];
	}
	for(int i=0;i<5;i++){
		ptr[i]=&num[i];
	}
	cout<<"the value are";
	for(int i=0;i<5;i++){
		cout<<num[i]<<endl;
		cout<<ptr[i]<<endl;
	}
	return 0;
	
}
