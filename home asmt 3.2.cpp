#include<bits/stdc++.h>
using namespace std;
class point{
	private:
	int a,b,c;
	public:
	void read(){
		cout<<"enter sides of triangle: ";
		cin>>a>>b>>c;
	}
	void check(){
		if((a+b>c) && (b+c>a) &&(c+a>b)){
			cout<<"triangle is valid\n";
		}
		else{
			cout<<"triangle is invalid\n";
		}
	}
};
int main (){
	point p;
	p.read();
	p.check();
	return 0;
}
