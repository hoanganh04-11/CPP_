#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int t; cin >> t;
	while(t--){
		ll x, y, m;
		cin >> x >> y >> m;
		ll res = m / x;
		ll vo = res;
		while(vo >= y){
			int newVal = vo / y;
			res += newVal;
			vo = vo % y + newVal;
		}
		cout << res << endl;
	}	
}
