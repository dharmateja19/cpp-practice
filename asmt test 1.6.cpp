#include<iostream>
#include<cmath>
using namespace std;
class point {
	double x,y;
	public:
	void read(){
		cin>>x>>y;	
	}
	double getx(){
		return x;
	}
	double gety(){
		return y;
	}
};
bool isvalid(double a,double b,double c){
		if(a+b>c||b+c>a||c+a>b){
			return true;
		}
		else{
			return false;
		}
	}
int main (){
	point p[3];
	for(int i=0;i<3;i++){
		cout<<"enter co-ordinates of point "<<i+1<<": ";
		p[i].read();
	}
	double x1,y1,x2,y2,x3,y3;
	x1=p[0].getx();
	x2=p[1].getx();
	x3=p[2].getx();
	y1=p[0].gety();
	y2=p[1].gety();
	y3=p[2].gety();
	double a,b,c;
	a=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
	b=sqrt(pow(x2-x3,2)+pow(y2-y3,2));
	c=sqrt(pow(x3-x1,2)+pow(y3-y1,2));
	if(isvalid(a,b,c)){
		cout<<"Triangle is valid"<<endl;
		if(a==b && b==c && c==a){
			cout<<"Equilateral triangle"<<endl;
		}
		else if(a==b || b==c ||c==a){
			cout<<"Isosceles Triangle"<<endl;
		}
		else{
			cout<<"Scalene Triangle"<<endl;
		}
	}
	else{
		cout<<"Invalid triangle"<<endl;
	}
}
