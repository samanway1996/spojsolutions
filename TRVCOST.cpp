#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
#define infi 1<<30
vector<pair<ll,ll> > vr[501];
ll dist[501];
void dij(ll s)
{
    dist[s]=0;
    ll i;
    set<pair<ll,ll> > st;
    st.insert(pair<ll,ll> (0,s));
    while(!(st.empty()))
    {
        pair<ll,ll> p=*st.begin();
        st.erase(st.begin());
        ll sz=vr[p.second].size();
        for(i=0;i<sz;i++)
        {
            if(p.first+vr[p.second][i].second<dist[vr[p.second][i].first])
            {
                dist[vr[p.second][i].first]=p.first+vr[p.second][i].second;
                st.insert(pair<ll,ll> (dist[vr[p.second][i].first],vr[p.second][i].first));
            }
        }
    }
}
int main()
{
    ll i;
    for(i=0;i<501;i++)
    {
        dist[i]=infi;
    }
    ll m;
    scanf("%lli",&m);
    while(m--)
    {
        ll a,b,w;
        scanf("%lli%lli%lli",&a,&b,&w);
        vr[a].pb(pair<ll,ll> (b,w));
        vr[b].pb(pair<ll,ll> (a,w));
    }
    ll u,q;
    scanf("%lli%lli",&u,&q);
    dij(u);
    while(q--)
    {
        ll o;
        scanf("%lli",&o);
        if(dist[o]==infi)
        {
            printf("NO PATH\n");
        }
        else
        printf("%lli\n",dist[o]);
    }
}
