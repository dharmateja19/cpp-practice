#include<iostream>
using namespace std;
int main (){
	int a,b;
	cout<<"enter 2 numbers : ";
	cin>>a>>b;
	int min=(a<b)?a:b;
	while(min>0){
		if(a%min==0&&b%min==0){
			cout<<"gcd is: "<<min;
			break;
		}
		else{
			min--;
		}
	}
	return 0;
}
