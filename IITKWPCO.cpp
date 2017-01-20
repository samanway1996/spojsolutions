#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
 
int main()
{
	ll tt;
	scanf("%lli",&tt);
	while(tt--)
	{
		ll n;
		scanf("%lli",&n);
		ll a[n],i,b[n],j,k;
		ll root[n];
		for(i=0;i<n;i++)
		{
			scanf("%lli",&a[i]);
			
			b[i]=1;
		}
		sort(a,a+n);
//		for(i=0;i<n;i++)
//		{
//			printf("%lli\n",a[i]);
//		}
		for(i=0;i<n;i++) root[i]=0;
		
		
		
		ll l=-1,o=0;
		for(i=1;i<n;i++)
		{
			for(j=l+1;j<=i;j++)
			{
				if(a[j]*2==a[i] && root[j]==0)
				{
					root[i]=1;
					root[j]=1;
					o++;
					l=j;
					break;
				}
			}
		}
//		set<ll> st;
//		for(i=0;i<n;i++)
//		{
//			st.insert(root[i]);
//		}
//		ll r=st.size();
		printf("%lli\n",o);
	}
}
