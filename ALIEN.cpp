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
        ll a,b,i;
        scanf("%lli%lli",&a,&b);
        ll p[a];
        for(i=0;i<a;i++)
        {
            scanf("%lli",&p[i]);
        }
        ll s=0,k=0;
        ll n=0,max=0,min=mod;
        for(i=0;i<a;i++)
        {
            if(s+p[i]<=b)
            {
                s+=p[i];
                n++;
            }
            else
            {
                s+=p[i];
                n++;
                while(s>b)
                {
                    s=s-p[k];
                    k++;
                    n--;
                }
            }
            if(n>max)
            {
                max=n;
                min=s;
            }
            if(n==max)
            {
                if(s<min)
                {
                    min=s;
                }
            }
        }
        printf("%lli %lli\n",min,max);
    }
}
