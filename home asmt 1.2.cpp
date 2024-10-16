#include<iostream>
using namespace std;
#include<iomanip>
int main (){
	float a;
	cout<<"enter a float value: ";
	cin>>a;
	int intpart=static_cast<int>(a);
	float decipart=a-intpart;
	cout<<"integer part: "<<intpart<<endl;
	cout<<"decimal part: "<<setprecision(2)<<decipart<<endl;
	return 0;
}
