#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
ll a[1000][1000];
int main()
{
	ll tt;
	scanf("%lli",&tt);
	while(tt--)
	{
		ll n,m,x=0,i,j;
		scanf("%lli%lli",&n,&m);
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				scanf("%lli",&a[i][j]);
				
			}
		}
		ll b[n];
		for(i=0;i<n;i++)
		{
			x=0;
			for(j=m-1;j>=0;j--)
			{
				if(j==m-1) x=a[i][j];
				else 
				{
					if(a[i][j]!=0)
					{
						if(a[i][j]<=x) x=a[i][j]-1;
						else x=a[i][j];
						
					}
				}
				
			}
			b[i]=x;
		}
		x=0;
		for(i=0;i<n;i++)
		x^=b[i];
		if(x==0) printf("SECOND\n");
		else printf("FIRST\n");
	}
}
