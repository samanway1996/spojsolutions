#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back

ll lucky[1000000],arr[35000];

void comp()
{
	ll i,j,c;
	for(i=4;i<1000000;i+=2)
	{
		lucky[i]=1;
	}
	for(i=3;i<35000;i++)
	{
		if(lucky[i]==0)
		{
			j=i+1;
			c=1;
			while(j<35000)
			{
				if(lucky[j]==0)
				{
					if(c==i)
					{
						c=0;
						lucky[j]=1;
					}
					j++;
					c++;
				}
				else j++;
			}
		}
	}
	ll k=0;
	for(i=2;i<35000;i++)
	{
		if(lucky[i]==0) 
		{
			k++;
			arr[k]=i;
		}
	}
	
}

int main()
{
	comp();
	while(1)
	{
		ll n;
		scanf("%lli",&n);
		if(n==0) break;
		printf("%lli\n",arr[n]);
	}
}
