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
        string s;
        cin>>s;
        vector<ll>a(26,0);
        vector<ll>b(26,0);
        for(ll i=0;i<n/2;i++){
            if(s[i]==s[n-i-1]){
                ll j = s[i]-'a';
                a[j]++;
            }
        }
        for(ll i=0;i<n;i++){
            ll j = s[i]-'a';
            b[j]++;
        }
        ll maxi=0,maxi1=0,sum=0;
        for(ll i=0;i<a.size();i++){
            sum+=a[i];
            maxi = max(maxi,a[i]);
        }
        for(ll i=0;i<b.size();i++){
            // sum+=a[i];
            maxi1 = max(maxi1,b[i]);
        }
        if(maxi1>n/2 || (n&1)){
            cout<<-1<<endl;
        }else{
            if(maxi>(sum-maxi)){
                cout<<maxi<<endl;
            }else{
                cout<<(sum/2)+(sum&1)<<endl;
            }
        }
    }
    timetaken;
    return 0;
}