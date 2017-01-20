#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
int main()
    {
    while(1)
        {
        ll n,i,s=0,sum=0;
        scanf("%lli",&n);
        if(n==-1) break;
        ll a[n];
        
        for(i=0;i<n;i++) scanf("%lli",&a[i]);
        for(i=0;i<n;i++) s+=a[i];
        if(s%n!=0)
            {
            cout<<"-1\n";
        }
        else
            {
            for(i=0;i<n;i++)
                {
                sum+=abs(s/n-a[i]); 
            }
            cout<<sum/2<<endl;
        }
    }
}
