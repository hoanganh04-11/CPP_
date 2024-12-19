#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll countPalindromes(int k) {
    if (k == 1) return 9; 

    ll half = pow(10, (k + 1) / 2 - 1);  
    ll start = half, end = pow(10, (k + 1) / 2); 
    
    return end - start;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        cout << countPalindromes(k) << endl;
    }
    return 0;
}
