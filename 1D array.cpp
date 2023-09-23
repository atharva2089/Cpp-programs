#include<iostream>
using namespace std;
// 1D array

int main(){
	int n;
	cout<<"Enter size of array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter array elements";
	for(int i=0;i<n;i++){
		
		cin>>arr[i];
	}
	cout<<"array elements";
	 for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
