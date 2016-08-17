#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
int main()
{
	ll tt,o=1;
	scanf("%lli",&tt);
	while(tt--)
	{
		ll n;
		scanf("%lli",&n);
		ll dist[n][n],i,j,k;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%lli",&dist[i][j]);
			}
		}
		for(k=0;k<n;k++)
		{
			for(i=0;i<n;i++)
			{
				for(j=0;j<n;j++)
				{
					if(dist[i][k]+dist[k][j]<dist[i][j])
					dist[i][j]=dist[i][k]+dist[k][j];
				}
			}
		}
		ll q,s=0;
		scanf("%lli",&q);
		while(q--)
		{
			ll a,b;
			scanf("%lli%lli",&a,&b);
			s+=dist[a-1][b-1];
			
		}
		printf("Case #%lli: %lli\n",o,s);
		o++;
	}
}
