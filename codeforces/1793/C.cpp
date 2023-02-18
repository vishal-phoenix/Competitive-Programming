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
        vector<ll> a(n);
        scanit(a,n);
        
            ll i = 0,j=n-1;
            ll maxi = n,mini = 1;
            while(i<j){
                if(a[i]==mini){
                    if(a[j]==maxi){
                        i++;j--;maxi--;mini++;
                    }else{
                        i++;mini++;
                    }
                }else if(a[i]==maxi){
                    if(a[j]==mini){
                        i++;j--;maxi--;mini++;
                    }else{
                        i++;maxi--;
                    }
                }else if(a[j]==maxi){
                    j--;
                    maxi--;
                }else if(a[j]==mini){
                    j--;mini++;
                }else{
                    break;
                }
            }
            if(i<j){
            cout<<i+1<<" "<<j+1<<endl;
            }else{
                cout<<-1<<endl;
            }        

        
        

    }
    
    return 0;
}