#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define mod2 10
int pown(ll n,ll m)
    {
    if(m==0) return 1;
    int temp=pown(n,m/2);
    if(m%2==0)
        {
        return ((temp%10)*(temp%10))%10;
    }
    else
        {
        return ((((temp%10)*(temp%10))%10)*(n%10))%10;
    }
}
int main()
    {
    int tt;
    cin>>tt;
    while(tt--)
        {
        ll n,m;
        cin>>n>>m;
        int h=pown(n,m);
        cout<<h<<endl;
    }
} 
