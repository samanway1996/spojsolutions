#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
 
double dist[110][110];
 
void ini()
{
	ll i,j;
	for(i=1;i<110;i++)
	{
		for(j=1;j<110;j++)
		{
			if(i!=j) dist[i][j]=-10.78;
			else dist[i][j]=1.0;
		}
	}
}
 
int main()
{
	while(1)
	{
	
	ll n,m,i,j,k;
	scanf("%lli",&n);
	if(n==0) break;
	scanf("%lli",&m);
	ini();
	while(m--)
	{
		ll a,b,c;
		scanf("%lli%lli%lli",&a,&b,&c);
		double f=c/100.0;
		dist[a][b]=f;
		dist[b][a]=f;
		
	}
	
//	for(i=1;i<=n;i++)
//	{
//		for(j=1;j<=n;j++)
//		{
//			cout<<dist[i][j]<<" ";
//		}
//		cout<<endl;
//	}
	
	for(k=1;k<=n;k++)
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				
				if(dist[i][k]!=-10.78 && dist[k][j]!=-10.78 && dist[i][k]*dist[k][j]>dist[i][j])
				{
					dist[i][j]=dist[i][k]*dist[k][j];
				}
			}
		}
	}
	
//	for(i=1;i<=n;i++)
//	{
//		for(j=1;j<=n;j++)
//		{
//			cout<<dist[i][j]<<" ";
//		}
//		cout<<endl;
//	}
	double r=dist[1][n]*100;
	printf("%lf percent\n",r);
	}
} 
