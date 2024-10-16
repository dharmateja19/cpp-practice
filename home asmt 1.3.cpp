#include<iostream>
using namespace std;
#include<cctype>
int main (){
	char p;
	cout<<"enter a character or number: ";
	cin>>p;
	if(isprint(p)){
		if(isalnum(p)){
			cout<<"alphanumeric"<<endl;
		}
		if(isalpha(p)){
			cout<<"alphabet"<<endl;
		}
		if(islower(p)){
			cout<<"lowercase"<<endl;
		}
		if(isupper(p)){
			cout<<"uppercase"<<endl;
		}
		if(isdigit(p)){
			cout<<"digit"<<endl;
		}
		if(isspace(p)){
			cout<<"space"<<endl;
		}
		if(ispunct(p)){
			cout<<"punctuation character"<<endl;
		}
	}
	else{
		cout<<"not printf character"<<endl;
	}
	return 0;
}
