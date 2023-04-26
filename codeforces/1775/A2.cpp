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
        bool ch  = false;
        ll pos;
        for(ll i=1;i<s.length()-1;i++){
            if(s[i]=='a'){
                ch =true;
                pos = i;
                break;
            }
        }
        if(ch){
            string a = "",c="",b="a";
            for(ll i=0;i<s.length();i++){
                if(i<pos){
                    a+=s[i];
                }else if(i>pos){
                    c+=s[i];
                }
            }
            cout<<a<<" "<<b<<" "<<c<<endl;
        }else{
            string b = "";
            for(ll i=1;i<s.length()-1;i++){
                b+=s[i];
            }
            cout<<s[0]<<" "<<b<<" "<<s[s.length()-1]<<endl;
        }
    }
    timetaken;
    return 0;
}