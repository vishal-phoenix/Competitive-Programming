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
        if(n%2==0){
            cout<<-1<<endl;
        }else{
            vector<ll> a;
            while(n!=1){
                if(((n+1)/2)%2!=0){
                    a.push_back(1);
                    n = (n+1)/2;
                }else{
                    a.push_back(2);
                    n = (n-1)/2;
                }
            }
            reverse(a.begin(),a.end());
            cout<<a.size()<<endl;
            for(ll i=0;i<a.size();i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
    }
    timetaken;
    return 0;
}