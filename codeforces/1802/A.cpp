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
        scanit(a,n);
        sort(all(a),greater<ll>());
        vector<ll> maxi(n);
        maxi[0]=1;
        for(ll i=1;i<n;i++){
            if(a[i]>0){
                maxi[i] = maxi[i-1]+1;
            }else{
                maxi[i] = maxi[i-1]-1;
            }
        }
        vector<ll> b(n);
        ll i=0,j=n-1;
        ll k=0;
        while(i<j){
            b[k] = a[i];
            k++;b[k] = a[j];
            k++;i++;j--;
        }
        if(i==j){
            b[k] = a[i];
        }
        vector<ll> mini(n);
        mini[0] = 1;
        for(ll i=1;i<n;i++){
            if(b[i]>0){
                mini[i] = mini[i-1]+1;
            }else{
                mini[i] = mini[i-1]-1;
            }
        }
        printit(maxi,n);
        printit(mini,n);
    }
    timetaken;
    return 0;
}