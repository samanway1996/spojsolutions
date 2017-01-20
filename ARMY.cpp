#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
int main()
    {
    ll t,i,j;
    cin>>t;
    while(t--)
        {
        ll ng,nm,a;
        cin>>ng>>nm;
        deque<ll> d1,d2;
        for(i=0;i<ng;i++)
            {
            cin>>a;
            d1.push_back(a);
        }
        for(i=0;i<nm;i++)
            {
            cin>>a;
            d2.push_back(a);
        }
        //cout<<*d1.begin();
        sort(d1.begin(),d1.end());
        sort(d2.begin(),d2.end());
        /*for(i=0;i<d1.size();i++)
            {
            cout<<d1[i]<<" ";
        }*/
        //cout<<*d1.begin();
        while(1)
            {
            if(d1.size()==0 || d2.size()==0) break;
            if(*d1.begin()>*d2.begin())
                {
                d2.pop_front();
            }
            else if(*d1.begin()<*d2.begin())
                {
                d1.pop_front();
            }
            else
                {
                d2.pop_front();
            }
        }
        if(d1.size()==0) cout<<"MechaGodzilla\n";
        else cout<<"Godzilla\n";
    }
}
