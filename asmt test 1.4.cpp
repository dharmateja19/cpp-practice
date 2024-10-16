#include<iostream>
using namespace std;
class date{
	int d,m,y;
	public:
	void read(){
		cout<<"enter date in dd/mm/yyyy format: ";
		cin>>d>>m>>y;
	}
	int getlastday(int m,int y){
		int lastday;
		if(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
			lastday=31;
		}
		else if(m==4||m==6||m==9||m==11){
			lastday=30;
		}
		else{
			if(m==2&&(y%4==0&&y%100!=0 || y%400==0)){
				lastday=29;
			}
			else{
				lastday=28;
			}
		}
		return lastday;
	}
	void add(int n){
		d=d+n;
		while(d>getlastday(m,y)){
			d-=getlastday(m,y);
			m++;
			if(m>12){
				m=1;
				y++;
			}
		}
		cout<<"New date: "<<d<<"/"<<m<<"/"<<y<<endl;
	}
};
int main (){
	date dt;
	dt.read();
	int nd;
	cout<<"enter no of days: ";
	cin>>nd;
	dt.add(nd);
	return 0;
}
