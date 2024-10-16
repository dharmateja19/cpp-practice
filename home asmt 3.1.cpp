#include<bits/stdc++.h>
using namespace std;
class bus{
	int bno;
	string stops,name;
	long long ph;
	public:
	void read(){
		cout<<"enter bus no. : ";
		cin>>bno;
		cin.ignore();
		cout<<"enter bus stops: "<<endl;
		getline(cin,stops);
		cout<<"enter driver name: ";
		getline(cin,name);
		cout<<"enter mobile number: ";
		cin>>ph;
	}
	void display(){
		cout<<"\n\nbus number: "<<bno<<endl;
		cout<<"stops: "<<stops<<endl;
		cout<<"driver name: "<<name<<endl;
		cout<<"mobile number: "<<ph<<endl;
	}
};
int main (){
	bus b1,b2;
	b1.read();
	b2.read();
	b1.display();
	b2.display();
	return 0;
}
