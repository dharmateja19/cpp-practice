#include<iostream>
using namespace std;
int main (){
	int n,sum=0;
	cout<<"enter number : ";
	cin>>n;
	for(int i=1;i<n;i++){
		if(n%i==0){
			sum+=i;
		}
	}
	if(sum==n){
		cout<<"perfect number"<<endl;
	}
	else{
		cout<<"not a perfect number"<<endl;
	}
	return 0;
}
