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

void dfs(ll i,ll j,vector<vector<ll>> &a,ll& cnt){
    if(a[i][j]==-1){
        return;
    }
    if(a[i][j]==0){
        return;
    }
    cnt+=a[i][j];
    a[i][j] = -1;
    if(i>0){
        dfs(i-1,j,a,cnt);
    }
    if(i<a.size()-1){
        dfs(i+1,j,a,cnt);
    }
    if(j>0){
        dfs(i,j-1,a,cnt);
    }
    if(j<a[0].size()-1){
        dfs(i,j+1,a,cnt);
    }
    return;
}

int main()
{
    flash;
    testcase{
        ll n,m;
        cin>>n>>m;
        vector<vector<ll>> a(n,vector<ll>(m,0));
        for(ll i=0;i<n;i++){
            scanit(a[i],m);
        }
        ll sum = INT_MIN;
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                ll cnt = 0;
                dfs(i,j,a,cnt);
                if(cnt>sum){
                    sum = cnt;
                }
            }
        }
        cout<<sum<<endl;
    }
    timetaken;
    return 0;
}