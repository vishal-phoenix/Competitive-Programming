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

ll digit_sum(ll x){
    ll ans=0;
    while(x>0){
        ans+=x%10;
        x/=10;
    }
    return ans;
}

int main()
{
    flash;
    testcase{
        ll n;
        cin>>n;
        ll a=0,b=0;
        a+=1;n--;
        ll i=2,j=4;
        bool ch = false;
        while(n>0){
            if(ch){
                ll x = j+(j+1);
                if(n>=x){
                    a+=x;
                    n-=x;
                }else{
                    a+=n;
                    n=0;
                }
                j+=4;ch = false;
            }else{
                ll x = i+(i+1);
                if(n>=x){
                    b+=x;
                    n-=x;
                }else{
                    b+=n;
                    n=0;
                }
                i+=4;ch = true;
            }
            //cout<<a<<" "<<b<<" "<<n<<endl;
        }
        cout<<a<<" "<<b<<endl;

    }
    
    return 0;
}