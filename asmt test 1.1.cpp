#include<iostream>
using namespace std;
int main(){
	//Author: Dharma
	//Date: 15/09/2024
	char ch;
	cout<<"enter a character: ";
	cin>>ch;
	if(ch>='a'&&ch<='z'){
		for(int i='a';i<ch;i++){
			cout<<char(i);
			if(i%2==0){
				cout<<"+";
			}
			else{
				cout<<"-";	
			}
		}
		cout<<ch<<endl;
	}
	else if(ch>='A'&&ch<='Z'){
		for(int i='A';i<ch;i++){
			cout<<char(i);
			if(i%2==0){
				cout<<"+";
			}
			else{
				cout<<"-";	
			}
		}
		cout<<ch<<endl;
	}
	else if(ch>='0'&&ch<='9'){
		for(int i='0';i<ch;i++){
			cout<<char(i);
			if(i%2==0){
				cout<<"+";
			}
			else{
				cout<<"-";	
			}
		}
		cout<<ch<<endl;
	}
	else{
		cout<<"it is a special symbol"<<endl;
	}
	return 0;
}
