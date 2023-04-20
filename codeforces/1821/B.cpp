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


int main()
{
    flash;
    testcase{
        ll n;
        cin>>n;
        vector<ll> a(n);
        vector<ll> b(n);
        scanit(a,n);
        scanit(b,n);
        ll st,ed;
        bool ch = true;
        for(ll i=0;i<n;i++){
            if(ch && a[i]!=b[i]){
                st = i+1;
                ed = st;
                ch = false;
            }
            if(a[i]!=b[i]){
                ed= i+1;
            }
        }
        ll mini = INT_MAX,maxi = INT_MIN;

        for(ll i = st-1;i<ed;i++){
            maxi = max(maxi,a[i]);
            mini = min(mini,a[i]);
        }
        // cout<<maxi<<" "<<mini<<endl;
        for(ll i=st-2;i>=0;i--){
            if(a[i]<=mini){
                st = i+1;
                mini=a[i];
            }else{
                break;
            }
        }
        for(ll i=ed;i<n;i++){
            if(a[i]>=maxi){
                ed = i+1;
                maxi=a[i];
            }else{
                break;
            }
        }
        cout<<st<<" "<<ed<<endl;

    }
    timetaken;
    return 0;
}