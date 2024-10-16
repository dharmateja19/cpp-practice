#include<iostream>
#include<cmath>
using namespace std;
bool isArmstrong(int n){
	int temp=n;
	int d=0,sum=0;
	while(n>0){
		n/=10;
		d++;
	}
	n=temp;
	while(n>0){
		int c=n%10;
		sum+=pow(c,d);
		n/=10;
	}
	if(sum==temp){
		return true;
	}
	else{
		return false;
	}
}
int main(){
	int n;
	cout<<"enter n: ";
	cin>>n;
	if(isArmstrong(n)){
		cout<<"Armstrong number"<<endl;
	}
	else{
		cout<<"Not an Armstrong number"<<endl;
	}
	return 0;
}
