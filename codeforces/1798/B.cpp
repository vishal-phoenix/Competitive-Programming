// Code by Vishal
#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define ff first
#define ss second
#define endl "\n"
#define all(x) (x).begin(),(x).end()
#define scanit(a,n) for(ll indexaa=0;indexaa<n;indexaa++) cin>>a[indexaa];
#define printit(a,n) for(ll indexaa=0; indexaa<n; indexaa++) cout<<a[indexaa]<<" "; cout<<endl;
#define pb push_back
inline ll power(ll x, unsigned ll y, ll p = LLONG_MAX) {ll res=1; x=x%p; if(x==0) {return 0;} while(y>0){ if(y&1){res=(res*x)%p;} y=y>>1; x=(x*x)%p;} return res;} // CALCULATING POWER IN LOG(Y) TIME COMPLEXITY
#define testcase ll t; cin>>t; while(t--)
#define flash  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout<<fixed; cout<<setprecision(10);
using namespace std;


int main()
{
    flash;
    testcase{
        ll m;
        cin>>m;
        unordered_map<ll,ll> mp;
        ll k=1;
        while(k<=m){
            ll n;
            cin>>n;
            for(ll i=0;i<n;i++){
                ll x;
                cin>>x;
                mp[x] = k;
            }
            k++;
        }
        vector<ll> a(m+1,-1);
        a[0] = 0;
        for(auto it:mp){
            a[it.second] = it.first;
        }
        bool ch = true;
        for(ll i=0;i<=m;i++){
            if(a[i]==-1){
                ch = false;
                break;
            }
        }
        if(ch){
            for(ll i=1;i<=m;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }else{
            cout<<-1<<endl;
        }

    }
    
    
    
    return 0;
}