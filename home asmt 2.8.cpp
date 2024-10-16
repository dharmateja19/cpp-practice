#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        bitset<3> binary(i);
        for (int j = binary.size() - 1; j >= 0; j--) {
            cout << binary[j] << '\t';
        }
        cout << endl;
    }
    return 0;
}

