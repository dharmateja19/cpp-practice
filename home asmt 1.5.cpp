#include<iostream>
using namespace std;
class time{
	private:
	int h,m,s;
	char ch;
	public:
	void read(){
		cin>>h>>m>>s;
		cout<<"enter 'a' for AM and 'p' for PM: ";
		cin>>ch;
		if (ch == 'p' && h != 12) {
            h += 12;
        }
        if (ch == 'a' && h == 12) {
            h = 0; 
        }
	}
	int gethours(){
		return h;
	}
	int getmins(){
		return m;
	}
	int getsecs(){
		return s;
	}
};
int diff(int a,int b){
	return a-b;
}
int main (){
	time t1,t2;
	cout<<"enter start time of class in HH MM SS format: ";
	t1.read();
	cout<<"enter end time of class in HH MM SS format: ";
	t2.read();
	int h1,h2,m1,m2,s1,s2;
	h1=t1.gethours();
	h2=t2.gethours();
	m1=t1.getmins();
	m2=t2.getmins();
	s1=t1.getsecs();
	s2=t2.getsecs();
	if(s1>s2){
		s2+=60;
		m2--;
	}
	if(m1>m2){
		m2+=60;
		h2--;
	}
	if(h1>h2){
		h2+=24;
	}
	int diff_s,diff_m,diff_h;
	diff_s=diff(s2,s1);
	diff_m=diff(m2,m1);
	diff_h=diff(h2,h1);
	cout<<"time difference is : "<<diff_h<<" hours "<<diff_m<<" minutes "<<diff_s<<" seconds";
	return 0;
}
