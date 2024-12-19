#include<bits/stdc++.h>
using namespace std;

string ADD(string a, string b){
	int l = max(a.size(), b.size());
	while(a.size() < l) a = "0" + a;
	while(b.size() < l) b = "0" + b;
	int carry = 0;
	string res ="";
	for(int i=l-1; i>=0; i--){
		int x = (a[i]-'0') + (b[i]-'0') + carry;
		res = char((x%10)+'0') + res;
		carry = x/10;
	}
	if(carry == 1) res = "1" + res;
	return res;
}

int main(){
	int t; cin >> t;
	while(t--){
		string a, b;
		cin >> a >> b;
		cout << ADD(a, b) << endl;
	}
}
