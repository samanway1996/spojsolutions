#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
ll sieve[10000005];
vector<ll> v;
int main()
    {
    ll i,j,c=0;
    for(i=2;i<50000;i++)
        {
        if(sieve[i]==0)
            {
            j=i;
            while(j<50000)
                {
                sieve[j]++;
                j+=i;
            }
        }
    }
    for(i=0;i<50000;i++)
        {
        if(sieve[i]>=3) v.push_back(i);
    }
    ll t;
    cin>>t;
    while(t--)
        {
        ll a;
        cin>>a;
        cout<<v[a-1]<<endl;
    }
}
