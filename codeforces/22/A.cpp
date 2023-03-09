#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int x = a[0];
    int ans = -1000;
    for(int i=1;i<n;i++){
        if(a[i]!=x){
            ans = a[i];
            break;
        }
    }
    if(ans==-1000){
        cout<<"NO"<<endl;
    }else{
        cout<<ans<<endl;
    }
}