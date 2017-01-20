#include"bits/stdc++.h"
using namespace std;
#define max 1000004
int phi[max];
int main()
{
	int i,j,t;
	for(i=0;i<max;i++)
	{
		phi[i]=i;
	}
	for(i=2;i<max;i++)
	{
		if(phi[i]==i)
		{
			for(j=i;j<max;j=j+i)
			{
				phi[j]-=phi[j]/i;
			}
		}
	}
	
	scanf("%d",&t);
	while(t--)
	{
		int x;
		scanf("%d",&x);
		printf("%d\n",phi[x]);
	}
	
}
