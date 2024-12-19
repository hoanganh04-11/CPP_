#include<bits/stdc++.h>
using namespace std;

vector<char> convert_number(long long n){
    vector<char> v;
    while(n){
        int r = n % 2;
        v.push_back(r + '0');
        n /= 2;
    }
    reverse(v.begin(), v.end());
    return v;
}
int main(){
    int t; cin >> t;
    while(t--){
        long long n; cin >> n;
        vector<char> bin = convert_number(n);
        for(char x : bin){
            cout << x;
        }
        cout << endl;
    }
}
