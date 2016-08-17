#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
ll hash[1000007];
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,m,mode=0,i,j,k;
		scanf("%lli",&n);
		ll a[n];
		for(i=0;i<1000007;i++)
		{
			hash[i]=0;
		}
		for(i=0;i<n;i++)
		{
			scanf("%lli",&m);
			hash[m+1000]++;
		}
		for(i=0;i<1000007;i++)
		{
			if(hash[i]>n/2)
			{
				cout<<"YES "<<(i-1000)<<endl;
				mode=1;
				break;
			}
		}
		if(mode==0) cout<<"NO\n";
	}
}
