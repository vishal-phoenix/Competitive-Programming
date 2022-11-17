// Code by Vishal
#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define ff first
#define ss second
#define endl "\n"
#define all(x) (x).begin(),(x).end()
#define scanit(a,n) for(ll indexaa=0;indexaa<n;indexaa++) cin>>a[indexaa];
#define pb push_back
inline ll power(ll x, unsigned ll y, ll p = LLONG_MAX) {ll res=1; x=x%p; if(x==0) {return 0;} while(y>0){ if(y&1){res=(res*x)%p;} y=y>>1; x=(x*x)%p;} return res;} // CALCULATING POWER IN LOG(Y) TIME COMPLEXITY
#define testcase ll t; cin>>t; while(t--)
#define flash  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout<<fixed; cout<<setprecision(10);
using namespace std;


int main()
{
    flash;
    testcase{
        ll hc,dc,hm,dm,k,w,a;
        cin>>hc>>dc>>hm>>dm>>k>>w>>a;
        bool check = false;
        for(int i=0;i<=k;i++){
            ll hth = hc+(i*a);
            ll dmg = dc+((k-i)*w);
            ll dys;
            if(hth%dm==0){
                dys = hth/dm;
            }else{
                dys = (hth/dm)+1;
            }
            ll dys2;
            if(hm%dmg==0){
                dys2 = hm/dmg;
            }else{
                dys2 = (hm/dmg)+1;
            }
            //cout<<dys<<" "<<dys2<<endl;
            if(dys2<=dys){
                check = true;
                break;
            }
        }
        if(check){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}