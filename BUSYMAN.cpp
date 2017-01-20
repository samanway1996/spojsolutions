#include"bits/stdc++.h"
using namespace std;
#define pb push_back
#define ll long long int
#define mod 1000000007
int main()
{
    ll t;
    scanf("%lli",&t);
    while(t--)
    {
        ll n,start,end;
        scanf("%lli",&n);
        set<pair<ll,ll> > st;
        while(n--)
        {
            ll a,b;
            scanf("%lli%lli",&a,&b);
            st.insert(pair<ll,ll> (b,a));
        }
        set<pair<ll,ll> > :: iterator it;
        ll c=0;
        
        for(it=st.begin();it!=st.end();it++)
        {
            if(it==st.begin())
            {
                start=it->second;
                end=it->first;
                c++;
            }
            else
            {
                start=it->second;
                if(start>=end)
                {
                    end=it->first;
                    c++;
                }
            }
        }
        cout<<c<<endl;
        
    }
}
