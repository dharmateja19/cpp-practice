#include<iostream>
#include<math.h>
using namespace std;
struct point{
	int x;
	int y;
};
int main (){
	point p1,p2;
	cout<<"enter x co-ordinate of first point: ";
	cin>>p1.x;
	cout<<"enter y co-ordinate of first point: ";
	cin>>p1.y;
	cout<<"enter x co-ordinate of 2nd point: ";
	cin>>p2.x;
	cout<<"enter y co-ordinate of 2nd point: ";
	cin>>p2.y;
	float distance;
	distance=sqrt(pow((p1.x-p2.x),2)+pow((p1.y-p2.y),2));
	cout<<"distance between two points is "<<distance<<endl;
	return 0;
}
