#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
int main()
{
	ll tt,i,j;
	cin>>tt;
	ll arr[10][65];
	for(i=0;i<10;i++)
	{
		arr[i][1]=1;
	}
	for(i=1;i<65;i++)
	{
		arr[0][i]=1;
	}
	for(i=2;i<65;i++)
	{
		for(j=1;j<10;j++)
		{
			arr[j][i]=arr[j-1][i]+arr[j][i-1];
			
		}
	}
//	for(i=0;i<10;i++)
//	{
//		for(j=1;j<15;j++)
//		{
//			cout<<arr[i][j]<<" ";
//		}
//		cout<<endl;
//	}
	while(tt--)
	{
		ll a,b;
		scanf("%lli%lli",&a,&b);
		ll s=0;
		for(i=0;i<10;i++)
		{
			s+=arr[i][b];
		}
		printf("%lli %lli\n",a,s);
	}
}
