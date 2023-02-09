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
        stack<int> st;
        ll sx=0,sy=0,x=0,y=0;
        while(n>0){
            ll z = n%10;
            st.push(z);
            n = n/10;
        }
        while(!(st.empty())){
            ll h = st.top();
            st.pop();
            ll g = h-(h/2);
            h/=2;
            if(sx<sy){
                x=(x*10)+g;
                y=(y*10)+h;
                sx+=g;
                sy+=h;
            }else{
                x=(x*10)+h;
                y=(y*10)+g;
                sx+=h;
                sy+=g;
            }
        }
        cout<<x<<" "<<y<<endl;
    }
    
    return 0;
}