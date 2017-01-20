#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define pb push_back
#define infi 1<<30
vector<pair<ll,ll> > vr[100008];
ll dist[100008];
void ini()
{
    ll i;
    for(i=0;i<100008;i++)
    {
        
        vr[i].clear();
    }
}
 
 
void ini2()
{
    ll i;
    for(i=0;i<100008;i++)
    {
        dist[i]=infi;
    }
}
 
 
 
 void dij(ll s ,ll dest)
 {
     dist[s]=0;
     ll sz,a,b,i;
     set<pair<ll,ll> > st;
     st.insert(pair<ll,ll> (0,s));
     while(!(st.empty()))
     {
         pair<ll,ll> p=*(st.begin());
         a=p.first;
         b=p.second;
         sz=vr[b].size();
         st.erase(st.begin());
         for(i=0;i<sz;i++)
         {
             if(dist[b]+vr[b][i].second<dist[vr[b][i].first])
             {
                 dist[vr[b][i].first]=dist[b]+vr[b][i].second;
                 st.insert(pair<ll,ll> (dist[vr[b][i].first],vr[b][i].first));
             }
         }
     }
 }
int main()
{
    ini();
    ll n,e,t,m,u,v,c,co,i;
    scanf("%lli%lli%lli%lli",&n,&e,&t,&m);
    while(m--)
    {
        scanf("%lli%lli%lli",&u,&v,&c);
        vr[u].pb( pair<ll,ll> (v,c) );
    }
    co=0;
    for(i=1;i<=n;i++)
    {
        ini2();
        dij(i,e);
        if(dist[e]<=t) co++;
    }
    cout<<co<<"\n";
}
