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
        ll cnt=0;
        vector<ll> a(n);
        for(ll i=0;i<n;i++){
            // ll x;
            cin>>a[i];
            if(a[i]==2){
                cnt++;
            }
        }if(cnt==0){
            cout<<1<<endl;
        }
        else if(cnt%2==0){
            cnt/=2;
            ll g=0;
            ll ans = 0;
            for(ll i=0;i<n;i++){
                if(a[i]==2){
                    g++;
                }
                if(g==cnt){
                    ans = i+1;
                    break;
                }
            }
            cout<<ans<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
    
    return 0;
}