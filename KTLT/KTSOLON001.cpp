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

string MUL(string a, string b){
	if(a == "0" || b == "0") return "0";
	string res(a.size() + b.size(), '0');
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	for(int i=0; i<b.size(); i++){
		int carry = 0;
		for(int j=0; j<a.size(); j++){
			int x = (b[i]-'0') * (a[j]-'0') + (res[i+j]-'0') + carry;
			res[i + j] = x%10 + '0';
			carry = x/10;
		}
		if(carry > 0) res[i+a.size()] = carry + '0';
	}
	reverse(res.begin(), res.end());
	while(res[0] == '0') res.erase(0, 1);
	return res;
}

int main(){
	int t; cin >> t;
	while(t--){
		string a, b;
		char sgn;
		cin >> a >> sgn >> b;
		if(sgn == '+') cout << ADD(a, b) << endl;
		else cout << MUL(a, b) << endl;
	}
}
