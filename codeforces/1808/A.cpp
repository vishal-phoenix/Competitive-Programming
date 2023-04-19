#include<bits/stdc++.h>
using namespace std;
int T,l,r;
int main()
{
	cin>>T;
	while(T--){
		cin>>l>>r;
		int ans=-1,pos=0;
		for(int i=l;i<=r;i++){
			int x=i,mx=0,mn=INT_MAX;
			while(x)mx=max(mx,x%10),mn=min(mn,x%10),x/=10;
			if(mx-mn>ans){ans=mx-mn;pos=i;}
			if(ans==9)break;
		}
		cout<<pos<<endl;
	}
	return 0;
}