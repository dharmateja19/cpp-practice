#include<iostream>
using namespace std;
int main(){
	int n,d=0;
	cout<<"enter weight: ";
	cin>>n;
	if(n<=250){
		cout<<"courier charges: Rs.60"<<endl;
	}
	else{
		int rw=n-250;
		int chrg=60;
		d=rw/50;
		cout<<d<<endl;
		chrg=chrg+d*10;
		cout<<"courier charges: Rs. "<<chrg<<endl;
	}
	return 0;
}
