#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define mod2 10
int pown(ll n,ll m)
    {
    if(m==0) return 1;
    ll temp=pown(n,m/2);
    if(m&1)
        {
        return ((((temp%10)*(temp%10))%10)*(n%10))%10;
    }
    else
        {
        return ((temp%10)*(temp%10))%10;
    }
}
int k=1;
int main()
    {
    int tt;
    cin>>tt;
    while(tt--)
        {
        ll n;
        cin>>n;
        ll m=4*n*n;
        //cout<<m<<" ";
        cout<<"Case "<<k<<": "<<m<<".25"<<endl;
        k++;
    }
}
