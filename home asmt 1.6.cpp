#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter a year: ";
	cin>>n;
	(n%4==0 && n%100!=0 || n%400==0)?cout<<"leap\n":cout<<"not leap\n";
	return 0;
}
