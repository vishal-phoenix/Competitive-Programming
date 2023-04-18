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
        bool ch = true;
        if(a[0]==a[n-1]){
            cout<<"NO"<<endl;
        }else{
            ll i=0,j=n-1;
            vector<ll> ans(n);
            ll k=0;
            while(i<j){
                ans[k] = a[i];
                k++;
                ans[k] = a[j];
                k++;i++;j--;
            }
            if(i==j){
                ans[k] = a[i];
            }
            ll sum = ans[0];
            for(ll i=1;i<n;i++){
                if(sum==ans[i]){
                    ch = false;
                    break;
                }
                sum+=ans[i];
            }
            if(ch){
                cout<<"YES"<<endl;
                printit(ans,n);
            }else{
                cout<<"NO"<<endl;
            }
        }
        
    }
    timetaken;
    return 0;
}