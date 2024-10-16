#include<iostream>
using namespace std;
int main (){
	int a,b,c,d,e,maxi;
	cout<<"enter 5 numbers: ";
	cin>>a>>b>>c>>d>>e;
	maxi=max(a,b);
	maxi=max(maxi,c);
	maxi=max(maxi,d);
	maxi=max(maxi,e);
	cout<<"max is "<<maxi;
	return 0;
}
