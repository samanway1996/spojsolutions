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
		ll n,m,min=1000006,i,j,k;
		cin>>n;
		ll arr[n];
		for(i=0;i<n;i++)
		{
			scanf("%lli",&arr[i]);
		}
		cin>>m;
		ll arr2[m];
		for(i=0;i<m;i++)
		{
			scanf("%lli",&arr2[i]);
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(abs(arr[i]-arr2[j])<min)
				min=abs(arr[i]-arr2[j]);
			}
		}
		cout<<min<<endl;
	}
}
