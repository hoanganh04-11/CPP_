#include<bits/stdc++.h>
using namespace std;

vector<char> convert_number(long long n){
    vector<char> res;
    while(n){
        int r = n % 16;
        if(r < 10) res.push_back(r + '0');
        else res.push_back(char(r + 55));
        n /= 16;
    }
    reverse(res.begin(), res.end());
    return res;
}

int main(){
    int t; cin >> t;
    while(t--){
        long long n; cin >> n;
        if(n==0) cout << 0;
        vector<char> bin = convert_number(n);
        for(char x : bin){
            cout << x;
        }
        cout << endl;
    }
}
