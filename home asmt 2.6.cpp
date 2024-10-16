#include<bits/stdc++.h>
using namespace std;
int tribonacci(int n) {
    if (n == 1) {
        return 0;
    } 
	else if (n == 2 || n == 3) {
        return 1;
    }
	else{
		int result = tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3);
    	return result;
	}
}
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout<<tribonacci(i)<<" ";
    }
    return 0;
}
