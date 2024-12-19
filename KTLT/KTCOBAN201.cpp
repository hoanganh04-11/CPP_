#include<bits/stdc++.h>
using namespace std;

bool check(string s){
    if(s.size() < 8) return false;
    bool Upper = false;
    bool Lower = false;
    bool Digit = false;
    bool Spec = false;
    for(int i=0; i<s.size(); i++){
        if(s[i] == s[i+1]) return false;
        if(isupper(s[i])) Upper = true;
        else if(islower(s[i])) Lower = true;
        else if(isdigit(s[i])) Digit = true;
        else Spec = true;
    }
    return Upper && Lower && Digit && Spec;
}

int main(){
    freopen("password.in", "r", stdin);
    freopen("res.out", "w", stdout);
    string s;
    while(cin >> s){
        if(check(s)) cout << "VALID" << endl;
        else cout << "INVALID" << endl;
    }
}
