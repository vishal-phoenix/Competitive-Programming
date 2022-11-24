// Code by Vishal
#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define ff first
#define ss second
#define endl "\n"
#define all(x) (x).begin(),(x).end()
#define scanit(a,n) for(ll indexaa=0;indexaa<n;indexaa++) cin>>a[indexaa];
#define pb push_back
inline ll power(ll x, unsigned ll y, ll p = LLONG_MAX) {ll res=1; x=x%p; if(x==0) {return 0;} while(y>0){ if(y&1){res=(res*x)%p;} y=y>>1; x=(x*x)%p;} return res;} // CALCULATING POWER IN LOG(Y) TIME COMPLEXITY
#define testcase ll t; cin>>t; while(t--)
#define flash  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout<<fixed; cout<<setprecision(10);
using namespace std;


int main()
{
    flash;
    testcase{
        ll n,k;
        cin>>n>>k;
        ll maxi = 1+2*((((n+1)/2)*k)-1);
        // cout<<maxi<<" ";
        ll maxi2 = 2+2*(((n/2)*k)-1);
        ll m=1,h=2;
        if(maxi>(n*k) || maxi2>(n*k)){
            cout<<"NO"<<endl;
        }else {
            cout<<"YES"<<endl;
            for(ll i=0;i<n;i++){
                for(ll j=0;j<k;j++){
                    if(i%2==0){
                        cout<<m<<" ";
                        m+=2;
                    }else{
                        cout<<h<<" ";
                        h+=2;
                    }
                }
                cout<<endl;
            }
        }
    }
    
    return 0;
}