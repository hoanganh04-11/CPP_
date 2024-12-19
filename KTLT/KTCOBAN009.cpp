#include<iostream>
#include<string>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int dem = 0;
		if(s[0] == '-') dem = 0;
		else dem = 1;
		for(int i=1; i<s.size(); i++){
			++dem;
		}
		cout << dem << endl;
	}
}
