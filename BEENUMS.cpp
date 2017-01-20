#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
int main()
    {
    vector<ll> v;
    ll k=1,i,l,j;
    while(1)
        {
        ll s=1+6*((k*(k+1))/2-k);
        if(s>mod ) break;
        v.push_back(s);
        k++;
    }
    l=v.size();
    //for(i=0;i<10;i++) cout<<v[i]<<" ";
    while(1)
        {
        ll mode=0;
        scanf("%lli",&k);
        if(k==-1) break;
        for(j=0;j<l;j++)
            {
            if(v[j]==k)
                {
                cout<<"Y\n";
                mode=1;
                break;
            }
        }
        if(mode==0) cout<<"N\n";
    }
}
