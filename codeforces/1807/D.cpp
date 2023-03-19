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
        ll n,q;
        cin>>n>>q;
        vector<ll> a(n);
        scanit(a,n);
        vector<ll>b(n+1);
        b[0] = 0;
        b[1] = a[0];
        for(ll i=2;i<n+1;i++){

            b[i] = b[i-1]+a[i-1];
        }
        // printit(b,n+1);
        ll sum = b[n];
        for(ll i=0;i<q;i++){
            ll l,r,k;
            cin>>l>>r>>k;
            // l--;r--;
            // cout<<b[r]<<" "<<b[l-1]<<" ";
            ll y = b[r]-b[l-1];
            ll z = sum-y+(k*(r-l+1));
            // cout<<k*(r-l+1)<<" "<<sum<<" "<<z<<" ";
            if(z%2==1){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }

        }

        

    }


   
    
    return 0;
}