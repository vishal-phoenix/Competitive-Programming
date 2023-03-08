#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin>>n;
	int a[n+1];
	for (int i=1; i<=n; i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	int ans=2e9;
	for (int i=3; i<=n; i++){
		ans=min(ans,a[i]-a[i-2]);
	}
	cout<<ans<<'\n';
}
int main(){
	int t;
	cin>>t;
	for (int i=1; i<=t; i++){
		solve();
	}
}