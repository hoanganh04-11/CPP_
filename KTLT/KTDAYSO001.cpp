#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100000

int main(){
	int t; cin >> t;
	while(t--){
		ll a[MAX];
		ll n; cin >> n;
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		bool check = true;
		ll d = a[1]-a[0];
		for(int i=2; i<n; i++){
			if(a[i] != (a[0] + i * d)){
				check = false;
				break; 
			}
		}
		if(check) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
