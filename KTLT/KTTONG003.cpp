#include<bits/stdc++.h>
using namespace std;

#define min INT_MIN

void dmax(){
	int n, m;
	cin >> n >> m;
	int a[n+2][m];
	
	for(int i=1; i<=n; i++){
		for(int j=0; j<m; j++){
			cin >> a[i][j];
		}
	}
	for(int j=0; j<m; j++){
		a[0][j] = min;
		a[n+1][j] = min;
	}
	for(int j=1; j<m; j++){
		for(int i = 1; i<=n; i++){
			a[i][j] += max(a[i-1][j-1], max(a[i][j-1], a[i+1][j-1]));
		}
	}
	int res = min;
	for(int i=1; i<=n; i++){
		if(a[i][m-1] > res){
			res = a[i][m-1];
		}
	}
	cout << res << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		dmax();
	}
}
