#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,d=0,ld,isprime;
	cout<<"enter number : ";
	cin>>n;
	if(n%2==0){
		cout<<"even"<<endl;
	}
	else{
		cout<<"odd"<<endl;
	}
	for(int i=2;i<n/2;i++){
		if(n%i==0){
			isprime=0;
			break;
		}
		isprime=1;
	}
	if(!isprime){
		cout<<"not a prime"<<endl;
	}
	else{
		cout<<"prime number"<<endl;
	}
	cout<<"divisors are: ";
	for(int i=1;i<=n;i++){
		if(n%i==0){
			cout<<i<<" ";
		}
	}
	cout<<endl;
	int temp=n;
	ld=n%10;
	cout<<"last digit : "<<ld<<endl;
	n=temp;
	while(n>0){
		n=n/10;
		d++;
	}
	cout<<"no. of digits: "<<d<<endl;
	n=temp;
	int p;
	cout<<"enter power: ";
	cin>>p;
	int res=pow(n,p);
	cout<<"power result is: "<<res<<endl;
	cout<<"square root is "<<sqrt(n)<<endl;
	return 0;
}
