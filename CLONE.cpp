#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
int main()
{
    while(1)
    {
        ll n,m;
        scanf("%lli%lli",&n,&m);
        ll t=n;
        if(n==0 && m==0) break;
        map<string,ll> mp;
        while(t--)
        {
            string s;
            cin>>s;
            mp[s]++;
        }
        map<string,ll> :: iterator it;
        ll arr[n+1];
        for(ll i=0;i<=n;i++)
        arr[i]=0;
        for(it=mp.begin();it!=mp.end();it++)
        {
            arr[mp[it->first]]++;
        }
        for(ll i=1;i<=n;i++)
        cout<<arr[i]<<endl;
    }
}
