// Code by Vishal
#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define ff first
#define ss second
#define all(x) (x).begin(),(x).end()
#define scanit(a,n) for(ll indexaa=0;indexaa<n;indexaa++) cin>>a[indexaa];
#define pb push_back
#define testcase ll t; cin>>t; while(t--)
#define flash  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout<<fixed; cout<<setprecision(10);
using namespace std;


int main()
{
    flash;
    testcase{
        ll l,r,k;
        cin>>l>>r>>k;
        if(l==1 && r==1){
            cout<<"NO"<<endl;
        }else if(l==r){
            cout<<"YES"<<endl;
        }
        else if(l%2!=0 || r%2!=0){
            ll x = (r-l)/2;
            x++;
            if(x<=k){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else if(l%2==0 && r%2==0){
            ll x = (r-l)/2;
            if(x<=k){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }
    
    return 0;
}