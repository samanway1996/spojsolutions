#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back

int main()
{
	ll dp1[35],dp2[35],i;
	dp1[0]=1;
	dp1[2]=3;
	dp1[1]=0;
	dp2[1]=1;
	for(i=4;i<35;i+=2)
	{
		dp2[i-1]=dp1[i-2]+dp2[i-3];
		dp1[i]=3*dp1[i-2]+dp2[i-3]*2;
	}
	while(1)
	{
		ll n;
		cin>>n;
		if(n==-1) break;
		if(n&1)
		cout<<"0\n";
		else 
		cout<<dp1[n]<<endl;
	}
}
