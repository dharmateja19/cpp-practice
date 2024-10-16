#include<bits/stdc++.h>
using namespace std;
class student{
	int roll;
	string name;
	double marks;
	public:
	void read(){
		cout<<"enter roll no. : ";
		cin>>roll;
		cin.ignore();
		cout<<"enter name: ";
		getline(cin,name);
		cout<<"enter marks: ";
		cin>>marks;
	}
	void sort(student s[]){
		for(int i=0;i<10;i++){
			for(int j=0;j<10;j++){
				if(s[j].marks<s[j+1].marks){
					swap(s[j],s[j+1]);
				}
			}
		}
	}
	void display(){
		cout<<"\nname: "<<name<<endl<<"roll: "<<roll<<"\nmarks: "<<marks<<endl;
	}
};
int main (){
	student s[10];
	for(int i=0;i<10;i++){
		s[i].read();
	}
	s[0].sort(s);
	for(int i=0;i<10;i++){
		s[i].display();
	}
}
