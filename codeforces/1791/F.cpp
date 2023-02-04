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
        ll n,m;
        cin>>n>>m;
        vector<ll> a(n);
        set<ll> st;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>9) st.insert(i);
        }
        for(ll i=0;i<m;i++){
            ll x;
            cin>>x;
            if(x==1){
                ll l,r;
                cin>>l>>r;l--;r--;
                ll lst = l;
                while(!st.empty()){
                    auto it = st.lower_bound(lst);
                    if(it==st.end() || *it>r) break;
                    a[*it] = digit_sum(a[*it]);
                    int g = *it;
                    st.erase(it);
                    if(a[g]>9) st.insert(g);
                    lst = g+1;
                }
            }else{
                ll f;
                cin>>f;f--;
                cout<<a[f]<<endl;
            }
        }


    }
    
    return 0;
}