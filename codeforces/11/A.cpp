#include<iostream>
int n,d,x,a[2010],i,t;
int main(){
std::cin>>n>>d;
for (i=1;i<=n;i++)std::cin>>a[i],t=a[i]>a[i-1]?0:(a[i-1]-a[i])/d+1,x+=t,a[i]+=t*d;
std::cout<<x;
}