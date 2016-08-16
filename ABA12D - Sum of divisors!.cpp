#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
ll num[1000008],dp[1000008],prime[10000008];

void cprime()
{
	ll i,j;
	
	prime[0]=1;
	prime[1]=1;
	prime[2]=0;
	for(i=3;i*i<10000008;i=i+2)
	{
		if(prime[i]==0)
		{
			j=3*i;
			while(j<10000008)
			{
				prime[j]=1;
				j+=2*i;
			}
		}
	}
//	for(i=0;i<100;i++)
//	{
//		if(prime[i]==0)
//		cout<<i<<endl;
//	}
}

ll check(ll a)
{
	ll i,s=0;
	ll o=a*a;
	for(i=1;i<a;i++)
	{
		if(o%i==0)
		{
			s+=i;
			s+=o/i;
		}
		
	}
	s+=a;
	
	if(prime[s]==0) return 1;
	else 
	return 0;
}

int main()
{
	//cprime();
	ll i;
	num[2]=1;
	num[4]=1;
	num[9]=1;
	num[16]=1;
	num[25]=1;
	num[64]=1;
	num[289]=1;
	num[729]=1;
	num[1681]=1;
	num[2401]=1;
	num[3481]=1;
	num[4096]=1;
	num[5041]=1;
	num[7921]=1;
	num[10201]=1;
	num[15625]=1;
	num[17161]=1;
	num[27889]=1;
	num[28561]=1;
	num[29929]=1;
	num[65536]=1;
	num[83521]=1;
	num[85849]=1;
	num[146689]=1;
	num[262144]=1;
	num[279841]=1;
	num[458329]=1;
	num[491401]=1;
	num[531441]=1;
	num[552049]=1;
	num[579121]=1;
	num[597529]=1;
	num[683929]=1;
	num[703921]=1;
	num[707281]=1;
	num[734449]=1;
	num[829921]=1;
	for(i=1;i<1000008;i++)
	{
		dp[i]=dp[i-1]+num[i];
	}
	ll tt;
	scanf("%lli",&tt);
	while(tt--)
	{
		ll a,b;
		scanf("%lli%lli",&a,&b);
		printf("%lli\n",dp[b]-dp[a-1]);
	}
}
