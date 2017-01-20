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
    ll n;
    scanf("%lli",&n);
    map<ll,ll> mp;
    ll i1,i2;
    ll c=0;
    while(n--)
    {
        
        string s;
        ll a;
        cin>>s;
        scanf("%lli",&a);
        if(s=="insert")
        {
            mp[a]++;
            if(mp[a]==2) c++;
        }
        else
        {
            if(mp.count(a)!=0)
            {
                mp[a]--;
                if(mp[a]==1) c--;
                if(mp[a]==0)
                mp.erase(a);
            }
        }
        ll sz=mp.size();
        i1=0;i2=0;
        if(sz>1)
        i2=1;
        map<ll,ll>:: iterator it;
        ll mode=0;
        if(c>0) i1=1;
        if(i1==0 && i2==0)
        {
            printf("neither\n");
        }
        if(i1==1 && i2==0)
        {
            printf("homo\n");
        }
        if(i1==0 && i2==1)
        {
            printf("hetero\n");
        }
        if(i1==1 && i2==1)
        {
            printf("both\n");
        }
    }
}
