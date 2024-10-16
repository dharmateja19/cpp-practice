#include<iostream>
using namespace std;
int main (){
	int n;
	cout<<"enter a number: ";
	cin>>n;
	int temp=n;
	int reverse=0;
	while(n>0){
		reverse= (reverse*10)+(n%10);
		n=n/10;
	}
	if(reverse==temp){
		cout<<"palindrome"<<endl;
	}
	else{
		cout<<"not a palindrome"<<endl;
	}
	return 0;
}
