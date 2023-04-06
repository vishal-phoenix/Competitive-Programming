// Code by Vishal
#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define ff first
#define ss second
#define endl "\n"
#define all(x) (x).begin(),(x).end()
#define timetaken cerr<<fixed<<setprecision(10); cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl
#define scanit(a,n) for(ll indexaa=0;indexaa<n;indexaa++) cin>>a[indexaa];
#define printit(a,n) for(ll indexaa=0; indexaa<n; indexaa++) cout<<a[indexaa]<<" "; cout<<endl;
#define pb push_back
inline ll power(ll x, unsigned ll y, ll p = LLONG_MAX) {ll res=1; x=x%p; if(x==0) {return 0;} while(y>0){ if(y&1){res=(res*x)%p;} y=y>>1; x=(x*x)%p;} return res;} // CALCULATING POWER IN LOG(Y) TIME COMPLEXITY
#define testcase ll t; cin>>t; while(t--)
#define flash  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout<<fixed; cout<<setprecision(10);
using namespace std;

bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second > b.second);
}


int main()
{
    flash;
    testcase{
        ll n,a,b;
        cin>>n>>a>>b;
        vector<ll> f(n);
        scanit(f,n);
        vector<ll> d,e;
        vector<pair<ll,ll>> c;
        for(ll i=0;i<n;i++){
            c.push_back({i+1,f[i]});
        }
        sort(c.begin(), c.end(), sortbysec);
        // for(ll i=0;i<n;i++){
        //     cout<<c[i].ff<<" ";
        // }
        // cout<<endl;
        ll s=1;
        ll i=0;
        while(i<n){
            if(s%a==0){
                d.push_back(c[i].ff);
                i++;
            }
            if(s%b==0 && i<n){
                e.push_back(c[i].ff);
                i++;
            }
            s++;
        }
        cout<<d.size()<<" ";
        printit(d,d.size());
        cout<<e.size()<<" ";
        printit(e,e.size());
        // cout<<endl;
    }
    timetaken;
    return 0;
}