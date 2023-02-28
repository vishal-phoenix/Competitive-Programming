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
        string a,b;
        cin>>a>>b;
        if(a==b){
            cout<<"YES"<<endl;
            cout<<a<<endl;
        }else if(a[0]==b[0]){
            cout<<"YES"<<endl;
            cout<<a[0]<<"*"<<endl;
        }else if (a[a.length()-1]==b[b.length()-1]){
            cout<<"YES"<<endl;
            cout<<"*"<<a[a.length()-1]<<endl;
        }else{
            
                bool check = false;
                string pos ;
                for(ll i=0;i<a.length()-1;i++){
                    string s = "";
                    s+=a[i];
                    s+=a[i+1];                    
                    for(ll j=0;j<b.length()-1;j++){
                        string f = "";
                        f+=b[j];
                        f+=b[j+1];
                        if(s==f){
                            check = true;
                            pos = f;
                            break;
                        }
                    }
                    if(check){
                        break;
                    }
                }
                if(check){
                    cout<<"YES"<<endl;
                    cout<<"*"+pos+"*"<<endl;
                }else{
                    cout<<"NO"<<endl;
                }
            
            
        }

    }
    
    return 0;
}