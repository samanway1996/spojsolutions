#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define pb push_back
ll visited[100008];
vector<ll> vr[100008];
void ini()
{
    ll i;
    for(i=0;i<100008;i++)
    {
        visited[i]=0;
        vr[i].clear();
    }
}
 
void dfs(ll s)
{
    visited[s]=1;
    ll i,sz;
    sz=vr[s].size();
    for(i=0;i<sz;i++)
    {
        if(visited[vr[s][i]]==0)
        {
            dfs(vr[s][i]);
        }
    }
}
int main()
{
    ll tt;
    scanf("%lli",&tt);
    while(tt--)
    {
        ll n,e,u,v,i,j,k=0;
        ini();
        scanf("%lli%lli",&n,&e);
        while(e--)
        {
            scanf("%lli%lli",&u,&v);
            vr[u].pb(v);
            vr[v].pb(u);
        }
        for(i=0;i<n;i++)
        {
            if(visited[i]==0) 
            {
                dfs(i);
                k++;
            }
        }
        cout<<k<<endl;
    }
}
