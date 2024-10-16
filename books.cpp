#include<iostream>
using namespace std;
struct book{
	string title;
	string author;
	int pages;
	float price;
};
int main (){
	//int n;
	/*cout<<"enter no. of books: ";
	cin>>n;*/
	book b[1];
	for(int i=0;i<1;i++){
		cout<<"enter book "<<i+1<<" details"<<endl;
		cout<<"enter title : ";
		//fflush(stdin);
		getline(cin,b[i].title);
		cout<<"enter author name: ";
		getline(cin,b[i].author);
		cout<<"enter no. of pages: ";
		cin>>b[i].pages;
		cout<<"enter price: ";
		cin>>b[i].price;
		cout<<"book "<<i+1<<" details :"<<endl;
		cout<<"title: "<<b[i].title<<endl;
		cout<<"author: "<<b[i].author<<endl;
		cout<<"pages: "<<b[i].pages<<endl;
		cout<<"price: "<<b[i].price<<endl;
	}
	return 0;
}
