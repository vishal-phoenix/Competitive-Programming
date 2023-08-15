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
        string s;
        cin>>s;
        ll n = s.length();
        bool ch = false;
        int pos  = -1;
        for(ll i=0;i<n;i++){
            if(s[i]>='5'){
                ch = true;
                pos = i;
                break;
            }
        }
        if(ch){
            if(pos==0){
                s = "1";
                for(ll i=0;i<n;i++){
                    s+="0";
                }
                cout<<s<<endl;
            }else{
                ll tp = pos;
                
                while(pos-1>=0 && s[pos]>='5'){
                    if(s[pos-1]<'9'){
                        s[pos-1] = s[pos-1]+1;
                    }
                    s[pos]='0';
                    pos--;
                }
                if(s[pos]>='5'){
                    s = "1";
                    for(ll i=0;i<n;i++){
                        s+="0";
                    }
                }else{
                    for(ll i = tp;i<n;i++){
                        s[i] = '0';
                    }
                }
                cout<<s<<endl;
            }
        }else{
            cout<<s<<endl;
        }
    }
    timetaken;
    return 0;
}