#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
ll gcd(ll a, ll b)
{
	if(a==1 || b==1) return 1;
	if(a==0) return b;
	if(b==0) return a;
	if(a>b) return gcd(a%b,b);
	if(a<b) return gcd(b%a,a);
	
}
ll arr[1000006][20],arr2[1000006];
void sieve()
{
	ll i,j,k;
	
	for(i=2;i<1000006;i++)
	{
		if(arr2[i]==0)
		{
			j=i,k=0;
			while(j<1000006)
			{
				arr[j][arr2[j]]=i;
				arr2[j]++;
				j+=i;
			}
		}
	}
//	for(i=0;i<100;i++)
//	{
//		cout<<i<<" : ";
//		for(j=0;j<arr2[i];j++)
//		{
//			cout<<arr[i][j]<<" ";
//		}
//		cout<<endl;
//	}
}
ll prime[1000005];
ll pr[78500];
void sieve2()
{
	ll i,j,k;
	for(i=4;i<1000005;i+=2)
	prime[i]=1;
	for(j=3;j<1000005;j++)
	{
		if(prime[j]==0)
		{
			i=3*j;
			while(i<1000005)
			{
				prime[i]=1;
				i+=2*j;
			}
		}
	}
	k=0;
	for(i=2;i<1000005;i++)
	{
		if(prime[i]==0)
		{
			pr[k]=i;
			k++;
		}
	}
	//cout<<v.size();
	//cout<<pr[78498]<<pr[0]<<endl;
}
int main()
{
	sieve2();
	ll t;
	scanf("%lli",&t);
	while(t--)
	{
		ll a,b,i,c,s;
		scanf("%lli%lli",&a,&b);
		ll g=gcd(a,b);
		//cout<<g<<endl;
		ll p=1;
		for(i=0;i<78498&&pr[i]<=g;i++)
		{
			s=0;
			while(g%pr[i]==0)
			{
				g/=pr[i];
				s++;
			}
			p*=s+1;
		}
		printf("%lli\n",p);
	}
}
