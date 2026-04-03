#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
#include<string>
#include<vector>
using namespace std;
 
#define pb push_back
#define ll long long
 
void solve (int t){
	vector<char> txt;
	for (int i=9;i>0;i--){
		if (t-i>=0){
			t-=i;
			txt.pb(i);
		}
	}
	sort(txt.begin(),txt.end());
	for (int x: txt)
		cout<<x;
	cout<<endl;
}
 
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;cin>>t;
	while(t--){
		int x; cin>>x; solve(x);
	}
	
	return 0;
}
 
