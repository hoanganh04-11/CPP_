#include<iostream>
#include<algorithm>
#include<cmath>
#include<iomanip>
using namespace std;
#define ll long long

ll myPow(ll a, ll b){
	ll res = 1;
	for(int i=1; i<=b; i++){
		res *= a;
	}
	return res;
}

bool arm(ll n){
	ll m = n, res = 0;
	int dem=0;
	while(n){
		++dem;
		n /= 10;
	}
	n = m;
	while(n){
		int r = n % 10;
		res += myPow(r, dem);
		n /= 10;
	}
	return m == res;
}

int main(){
	int t; cin >> t;
	while(t--){
		long long n; cin >> n;
		if(arm(n)) cout << 1 << endl;
		else cout << 0 << endl;
	}
}
