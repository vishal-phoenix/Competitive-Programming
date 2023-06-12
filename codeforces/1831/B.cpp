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
        map<ll,ll> mp;
        ll cnt = 1;
        for(ll i=1;i<n;i++){
            if(a[i]==a[i-1]){
                cnt++;
            }else{
                if(mp.find(a[i-1])!=mp.end()){
                    mp[a[i-1]] = max(cnt,mp[a[i-1]]);
                }else{
                    mp[a[i-1]] = cnt;
                }
                cnt = 1;
            }
        }
        if(mp.find(a[n-1])!=mp.end()){
            mp[a[n-1]] = max(cnt,mp[a[n-1]]);
        }else{
            mp[a[n-1]] = cnt;
        }
        cnt = 1;
        map<ll,ll> mp1;
        for(ll i=1;i<n;i++){
            if(b[i]==b[i-1]){
                cnt++;
            }else{
                if(mp1.find(b[i-1])!=mp1.end()){
                    mp1[b[i-1]] = max(cnt,mp1[b[i-1]]);
                }else{
                    mp1[b[i-1]] = cnt;
                }
                cnt = 1;
            }
        }
        if(mp1.find(b[n-1])!=mp1.end()){
            mp1[b[n-1]] = max(cnt,mp1[b[n-1]]);
        }else{
            mp1[b[n-1]] = cnt;
        }
        // for(auto it: mp){
        //     cout<<it.ff<<" "<<it.ss<<endl;
        // }
        // cout<<endl;
        // for(auto it: mp1){
        //     cout<<it.ff<<" "<<it.ss<<endl;
        // }
        for(auto it:mp1){
            if(mp.find(it.ff)!=mp.end()){
                mp[it.ff]+=it.ss;
            }else{
                mp[it.ff] = it.ss;
            }
        }
        ll maxi = INT_MIN;
        for(auto it: mp){
            maxi = max(maxi,it.ss);
        }
        cout<<maxi<<endl;


    }
    timetaken;
    return 0;
}