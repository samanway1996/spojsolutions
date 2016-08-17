#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back

ll cube[1000008],rnk[1000008];

void comp()
{
	ll i,j;
	for(i=2;i<=100;i++)
	{
		cube[i*i*i]=-1;
	}
	for(i=8;i<1000008;i++)
	{
		if(cube[i]==-1)
		{
			j=i;
			while(j<1000008)
			{
				cube[j]=-1;
				j+=i;
			}
		}
	}
	rnk[0]=0;
	rnk[1]=1;
	for(i=2;i<1000008;i++)
	{
		if(cube[i]==0) rnk[i]=rnk[i-1]+1;
		else rnk[i]=rnk[i-1];
	}
//	for(i=0;i<=200;i++)
//	{
//		if(cube[i]==-1) cout<<i<<endl;
//	}
}

int main()
{
	comp();
	ll tt,t=1;
	scanf("%lli",&tt);
	while(tt--)
	{
		ll n;
		cin>>n;
		if(cube[n]!=-1)
		{
			printf("Case %lli: %lli\n",t,rnk[n]);		
		}
		else
		{
			printf("Case %lli: Not Cube Free\n",t);	
		}
		t++;
	}
}
