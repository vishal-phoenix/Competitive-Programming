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
        string a="",b="";
        for(ll i=0;i<n/2;i++){
            a+=s[i];
        }
        ll x = (n+1)/2;
        for(ll i=x;i<n;i++){
            b+=s[i];
        }
        reverse(all(b));
        bool ch = true;
        bool cg = false;
        ll cnt = 0;
        ll pos  = -1;
        for(ll i=0;i<n/2;i++){
            if(a[i]!=b[i]){
                cg = true;
                cnt++;
            }
            if(cg && a[i]==b[i]){
                pos = i+1;
                cg=false;
                break;
            }
        }
        if(pos!=-1){
            for(ll i=pos;i<n/2;i++){
                if(a[i]!=b[i]){
                    ch = false;
                    break;
                }
            }
        }
        if(ch){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }

    }
    
    return 0;
}