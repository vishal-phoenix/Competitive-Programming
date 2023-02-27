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

bool ch(vector<ll> c){
    for(ll i=1;i<c.size();i++){
        if(c[i]!=c[i-1]){
            return false;
        }
    }
    return true;
}

int main()
{
    flash;
    testcase{
        ll n;
        cin>>n;
        vector<ll> a(n);
        ll mini = INT_MAX,pos = -1;
        bool cons = true,ch1 = false;
        ll x;
        cin>>x;
        a[0] = x;
        if(a[0]==1){
            ch1 = true;
        }
        mini = a[0];
        pos = 0;
        for(ll i=1;i<n;i++){
            cin>>x;
            if(x<mini){
                mini = x;
                pos = i;
            }
            a[i] = x;
            if(x!=a[i-1]){
                cons = false;
            }
        }
        if(n==1 || cons){
            cout<<0<<endl;
        }else if(ch1){
            cout<<-1<<endl;
        }else{
            vector<vector<ll>> ans;
            vector<ll> d = a;
            bool fl = true;
            while(!ch(a)){
                bool gh = false;
                for(ll i=0;i<n;i++){
                    if(a[i]>mini){
                        ll z = a[i]/mini;
                        if(a[i]%mini!=0){
                            z++;
                        }
                        ans.pb({i,pos});
                        a[i] = z;
                        gh = true;
                    }
                }
                if(a==d){
                    cout<<-1<<endl;
                    fl = false;
                    break;
                }
                d = a;
                mini = INT_MAX;
                for(ll i=0;i<n;i++){
                    if(a[i]< mini){
                        mini = a[i];
                        pos = i;
                    }
                }
            }
            if(fl){
                cout<<ans.size()<<endl;
                for(auto it: ans){
                    cout<<it[0]+1<<" "<<it[1]+1<<endl;
                }
            }
        }

    }
    
    return 0;
}