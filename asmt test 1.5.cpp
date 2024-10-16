#include<iostream>
using namespace std;
class bank{
	int d,m,y,acno;
	static float bal;
	public:
	void read(){
		cout<<"enter date of opening account: ";
		cin>>d>>m>>y;
		cout<<"enter account number: ";
		cin>>acno;
	}
	void deposit(int amt){
		bal+=amt;
	}
	void withdraw(int amt){
		if(amt>bal){
			cout<<"insufficient funds"<<endl;
		}
		else{
			bal-=amt;
		}
	}
	int getd(){
		return d;
	}
	int getm(){
		return m;
	}
	int gety(){
		return y;
	}
	void interest(int n){
		float qr;
		cout<<"enter quarterly interest rate: ";
		cin>>qr;
		for(int i=0;i<n;i++){
			bal+=(bal*(qr/100.0));
		}
	}
	void display(){
		cout<<"Account number: "<<acno<<endl;
		cout<<"Balance: "<<bal<<endl;
	}
};
float bank::bal=0.0;
int getquarter(int m){
	if(m>=1 && m<=3) return 1;
	else if(m>=4 && m<=6) return 2;
	else if(m>=7 && m<=9) return 3;
	else return 4;
}
int calculatequarters(int sd,int sm,int sy,int ed,int em,int ey){
	int sq=getquarter(sm);
	int eq=getquarter(em);
	int totalq=(ey-sy)*4+(eq-sq);
	return totalq;
}
int main (){
	bank b[2];
	int ed=31,em=3,ey=2024;
	for(int i=0;i<2;i++){
		cout<<"enter details of user "<<i+1<<endl;
		b[i].read();
		int dep,with;
		cout<<"enter amount to deposit: ";
		cin>>dep;
		b[i].deposit(dep);
		cout<<"enter amount to withdraw: ";
		cin>>with;
		b[i].withdraw(with);
		int sd,sm,sy;
		sd=b[i].getd();
		sm=b[i].getm();
		sy=b[i].gety();
		int tq=calculatequarters(sd,sm,sy,ed,em,ey);
		b[i].interest(tq);
		b[i].display();
	}
}
