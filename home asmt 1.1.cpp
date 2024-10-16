#include<iostream>
using namespace std;
int main (){
	int a,b,c;
	cin>>a>>b>>c;
	a=a+b;
	b=a-b;
	a=a-b;
	a=a+c;
	c=a-c;
	a=a-c;
	/*int temp;
	temp=a;
	a=b;
	b=c;
	c=temp;*/
	cout<<a<<" "<<b<<" "<<c;
	
}
