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
        ll n,k;
        cin>>n>>k;
        vector<ll> a(n);
        vector<ll> b(n);
        scanit(a,n);
        scanit(b,n);
        vector<pair<ll,ll>> c(n);
        for(ll i=0;i<n;i++){
            c[i] = {a[i],b[i]};
        }
        sort(all(c));
        for(ll i=0;i<n;i++){
            if(c[i].first<=k){
                k+=c[i].second;
            }else{
                break;
            }
        }
        cout<<k<<endl;
    }
    
    return 0;
}