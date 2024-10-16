#include<iostream>
using namespace std;
int main (){
	string line;
	cout<<"enter line of text: "<<endl;
	getline(cin,line);
	string word;
	cout<<"enter word to find: ";
	cin>>word;
	int r=0;
	int pos=line.find(word);
	while(pos!=-1){
		r++;
		pos=line.find(word,pos+1);
	}
	cout<<"the word repated "<<r<<" times in given text."<<endl;
	return 0;
}
