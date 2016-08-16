#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
int main()
{
	ll dp[100000],i;
	dp[0]=1;
	dp[1]=2;
	for(i=2;i<1400;i++)
	{
		dp[i]=dp[i-1]+dp[i-2];
	}
//	for(i=0;i<50;i++)
//	{
//		cout<<dp[i]<<endl;
//	}
	ll  n;
	cin>>n;
	while(n--)
	{
		cin>>i;
		cout<<dp[i]<<endl;
	}
	
}
