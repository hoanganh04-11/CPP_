#include<bits/stdc++.h>
using namespace std;
#define ll long long

unsigned long int binoC(unsigned int n, unsigned k){
	unsigned long int ans = 1;
	if(k > n-k){
		k = n- k;
	}
	for(int i=0; i<k; i++){
		ans *= (n-i);
		ans /= (i+1);
	}
	return ans;
}

unsigned long int catalan(unsigned int n){
	unsigned long int res = binoC(2*n, n);
	return res/(n+1); 
}


int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		cout << catalan(n) << endl;
	}
}
