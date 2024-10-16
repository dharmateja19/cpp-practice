#include<iostream>
using namespace std;
int main() {
    int n;
    char ch;
    cout<<"enter n: ";
    cin>>n;
    cout<<"enter character: ";
    cin>>ch;
    for(int i=1;i<=n;i++) {
        for(int j=1; j<=2*n-2*i;j++){
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++) {
            if(k==1 || k==2*i-1){
                cout<<ch;
            } 
            else {
                cout<<" ";  
            }
            if(k<2*i-1){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
