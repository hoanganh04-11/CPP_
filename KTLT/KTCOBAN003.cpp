#include<iostream>
#include<string>
#include<cmath>
#include<iomanip>
using namespace std;
#define ll long long
bool cp(ll n){
	int can = sqrt(n);
	return 1ll * can * can == n;
}

int main(){
	int t; cin >> t;
	while(t--){
		ll l, r; cin >> l >> r;
		int dem = 0;
		int can1 = ceil(sqrt(l));
		int can2 = sqrt(r);
		cout << can2 - can1 + 1 << endl;
	}
}
