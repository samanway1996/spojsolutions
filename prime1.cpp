#include"bits/stdc++.h"
#define ll long long int
#define mod 1000000007
using namespace std;
ll arr[31622];
vector<ll> v;
void sieve()
{
	ll i,j;
	for(i=4;i<31622;i+=2)
	{
		arr[i]=1;
	}
	for(i=2;i*i<31622;i++)
	{
		if(arr[i]==0)
		{
			j=3*i;
			while(j<31622)
			{
				arr[j]=1;
				j+=2*i;
			}
		}
	}
	for(i=2;i<31622;i++)
	{
		if(arr[i]==0)
		{
			v.push_back(i);
		}
	}
	/*cout<<v.size();
	for(i=0;i<100;i++)
	{
		cout<<v[i]<<" ";
	}*/

}
int main()
{
	sieve();
	ll t,i,j,s=v.size();
	scanf("%lli",&t);
	while(t--)
	{
		ll n,m,mode;
		scanf("%lli%lli",&n,&m);
		for(i=n;i<=m;i++)
		{
			mode=0;
			for(j=0;j<s;j++)
			{
				if(i%v[j]!=0 || i==v[j])
				{
					if(i==v[j])
					{
						break;
					}
				}
				
					//continue;
					else
					{
						mode=1;
						break;
					}
					//cout<<"ok";
			}
			if(mode==0 && i!=1) printf("%lli\n",i);
		}
		printf("\n");
	}
}
