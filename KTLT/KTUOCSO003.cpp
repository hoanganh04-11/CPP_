#include<bits/stdc++.h>
using namespace std;
#define ll long long

int Sum(int n){
	int sum = 1;
	for(int i=2; i*i<n; i++){
		if(n % i == 0){
			if(i != n/i){
				sum += i + n/i;
			}
			else{
				sum += i;
			}
		}
	}
	return sum;
}

int main(){
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		if(Sum(n) == n && n != 1) cout << 1 << endl;
		else cout << 0 << endl; 
	}
}
