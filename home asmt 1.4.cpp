#include<iostream>
using namespace std;
int main (){
	char a,b;
	cout<<"enter two characters: ";
	cin>>a>>b;
	if(a>='A' && a<='Z'){
		a=a+('a'-'A');
	}
	if(b>='A' && b<='Z'){
		b=b+32;
	}
	if(a==b){
		cout<<"two characters are equal"<<endl;
	}
	else{
		cout<<"two characters are not equal"<<endl;	
	}
	return 0;
}
