#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
int main()
{
	ll tt,n;
	scanf("%lli",&tt);
	while(tt--)
	{
		vector<ll> v,vv;
		while(1)
		{
			scanf("%lli",&n);
			if(n==0) break;
			v.pb(n);
		}
		ll sz=v.size(),i,j,m=0,sz2;
		while(1)
		{
			vv.clear();
			ll mode=0;
			while(1)
			{
				scanf("%lli",&n);
				if(vv.size()==0 && n==0)
				{
					mode=1;
					break;
				}
				if(n==0) break;
				vv.pb(n);
			}
			sz2=vv.size();
			ll dp[sz+1][sz2+1];
			for(i=0;i<=sz;i++)
			{
				dp[i][0]=0;
			}
			for(i=0;i<=sz2;i++)
			{
				dp[0][i]=0;
			}
			for(i=1;i<=sz;i++)
			{
				for(j=1;j<=sz2;j++)
				{
					if(v[i-1]==vv[j-1])
					{
						dp[i][j]=dp[i-1][j-1]+1;
					}
					else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
				}
			}
			m=max(m,dp[sz][sz2]);
			if(mode==1) break;
		}
		printf("%lli\n",m);
	}
}
