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
        if(n%2==0){
            cout<<"NO"<<endl;
        }else{
            vector<ll> a(n);
            vector<ll> b(n);
            ll z = n+1;
            for(ll i=0;i<n;i++){
                a[i] = i+1;
                b[i] = z;
                z++;
            }
            cout<<"YES"<<endl;
            cout<<1<<" "<<2*n<<endl;
            ll y = 3;
            for(ll i=1;i<=n/2;i++){
                cout<<a[i]<<" "<<b[n-y]<<endl;
                y+=2;
            }
            ll x = 2;
            for(ll i=(n/2)+1;i<n;i++){
                cout<<a[i]<<" "<<b[n-x]<<endl;
                x+=2;
            }

        }
    }
    
    return 0;
}