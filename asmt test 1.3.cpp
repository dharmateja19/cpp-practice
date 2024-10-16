#include<iostream>
using namespace std;
int main (){
	int ones,twos,fives,tens,twentys,fiftys,hunds,fivehs,ths;
	cout<<"enter no. of 1's: ";
	cin>>ones;
	cout<<"enter no. of 2's: ";
	cin>>twos;
	cout<<"enter no. of 5's: ";
	cin>>fives;
	cout<<"enter no. of 10's: ";
	cin>>tens;
	cout<<"enter no. of 20's: ";
	cin>>twentys;
	cout<<"enter no. of 50's: ";
	cin>>fiftys;
	cout<<"enter no. of 100's: ";
	cin>>hunds;
	cout<<"enter no. of 500's: ";
	cin>>fivehs;
	cout<<"enter no. of 1000's: ";
	cin>>ths;
	int total=1*ones+2*twos+5*fives+10*tens+20*twentys+50*fiftys+100*hunds+500*fivehs+1000*ths;
	cout<<"Total money: "<<total;
	return 0;
}
