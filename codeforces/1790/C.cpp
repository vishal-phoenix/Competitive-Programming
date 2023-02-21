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
        ll n;
        cin>>n;
        vector<vector<ll>> a(3,vector<ll>(n-1));
        for(ll i=0;i<3;i++){
            for(ll j=0;j<n-1;j++){
                ll x;
                cin>>x;
                a[i][j] = x;
            }
        }
        ll z = (n-1)*(n-3);
        ll x;
        for(ll i=0;i<z;i++){
            cin>>x;
        }
        vector<ll> ans(n);
        ll prev = -1,k=0;
        for(ll i=0;i<n-1;i++){
            ll b = a[0][i],c = a[1][i],d = a[2][i];
            if(b==c){
                
                if(prev == d){
                    ans[k] = prev;
                    k++;
                }else{
                    prev = d;
                }
                ans[k] = b;
                k++;
            }else if(d==c){
                
                if(prev == b){
                    ans[k] = prev;
                    k++;
                }else{
                    prev = b;
                }
                ans[k] = d;
                k++;
            }else if(b==d){
                
                if(prev == c){
                    ans[k] = prev;
                    k++;
                }else{
                    prev = c;
                }
                ans[k] = b;
                k++;
            }
        }
        printit(ans,n);


    }
    
    return 0;
}