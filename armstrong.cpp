#include<iostream>
#include<math.h>
using namespace std;
int main (){
	int n,c,d=0,sum=0;
	cout<<"enter number : ";
	cin>>n;
	int temp=n;
	while(n>0){
		n=n/10;
		d++;
	}
	n=temp;
	while(n>0){
		c=n%10;
		sum+=pow(c,d);
		n=n/10;
	}
	if(sum==temp){
		cout<<"armstrong number"<<endl;
	}
	else{
		cout<<"not a armstrong number"<<endl;
	}
	return 0;
}
