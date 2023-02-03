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
        string s;
        cin>>s;
        unordered_map<char,ll> s1;
        unordered_map<char,ll> s2;
        s1[s[0]]++;
        for(ll i=1;i<n;i++){
            s2[s[i]]++;
        }
        ll x = s1.size()+s2.size();
        for(ll i=1;i<n-1;i++){
            s1[s[i]]++;
            s2[s[i]]--;
            if(s2[s[i]]==0){
                s2.erase(s[i]);
            }
            ll z = s1.size()+s2.size();
            x = max(z,x);
        }
        cout<<x<<endl;
        
    }
    
    return 0;
}