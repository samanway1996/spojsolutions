#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
ll root[10008];
void ini()
{
    for(ll i=0;i<10008;i++)
    {
        root[i]=i;
    }
}
ll find(ll u)
{
    while(u!=root[u])
    {
        u=root[u];
    }
    return u;
}
void uni(ll u, ll v)
{
    root[v]=u;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll o;
        cin>>o;
    ll n,e,u,v,i,j,k,c,coun=0,tcst=0,uv;
    scanf("%lli%lli",&n,&e);
    set< pair<ll,ll> > s;
    while(e--)
    {
        scanf("%lli%lli%lli",&u,&v,&c);
        uv=100000*u+v;
        s.insert(pair<ll,ll> (c,uv));
    }
    ini();
    
    set<pair<ll,ll> > :: iterator it;
    for(it=s.begin();it!=s.end();it++)
    {
        
        v=(it->second)%100000;
        u=(it->second-v)/100000;
        j=find(u);
        k=find(v);
        if(j==k) continue;
        else
        {
            //cout<<u<<" "<<v<<endl;
            tcst+=it->first;
            uni(j,k);
            coun++;
            if(coun==(n-1)) break;
        }
    }
    cout<<tcst*o<<endl;
    }
}
