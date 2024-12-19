#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool cp(ll n){
	ll can = sqrt(n);
    return can * can == n;
}

bool cscp(ll n){
	while(n){
		int r = n % 10;
		if(r != 0 && r!= 1 && r != 4 && r != 9){
			return false;
		}
		n /= 10;
	}
	return true;
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		if(n == 1) cout << 1 << endl;
        else{
            for(long long i=4; i<=pow(10, n)-1; i++){
			ll num = i*i;
			if(num >= pow(10, n-1) && num <= pow(10, n) - 1 && cp(num) && cscp(num)){
				cout << num << endl;
				break;
			}
			}
        }
	}
}
