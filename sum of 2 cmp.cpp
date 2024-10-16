#include<iostream>
using namespace std;
struct complex{
	int real;
	int img;
};
int main (){
	complex p1,p2;
	cout<<"enter real co-ordinate of first point: ";
	cin>>p1.real;
	cout<<"enter img co-ordinate of first point: ";
	cin>>p1.img;
	cout<<"enter real co-ordinate of 2nd point: ";
	cin>>p2.real;
	cout<<"enter img co-ordinate of 2nd point: ";
	cin>>p2.img;
	float sum_real,sum_img;
	sum_real=p1.real+p2.real;
	sum_img=+p1.img+p2.img;
	cout<<"sum is "<<sum_real<<"+i"<<sum_img<<endl;
	return 0;
}
