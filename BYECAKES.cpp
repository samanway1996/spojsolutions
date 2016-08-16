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
	while(1)
	{
		ll a1,a2,b1,b2,c1,c2,d1,d2;
		scanf("%lli%lli%lli%lli%lli%lli%lli%lli",&a1,&b1,&c1,&d1,&a2,&b2,&c2,&d2);
		if(a1==-1) break;
		ll max=ceil((a1*1.0)/a2);
		if(ceil((b1*1.0)/b2)>max) max=ceil((b1*1.0)/b2);
		if(ceil((c1*1.0)/c2)>max) max=ceil((c1*1.0)/c2);
		if(ceil((d1*1.0)/d2)>max) max=ceil((d1*1.0)/d2);
		cout<<a2*max-a1<<" "<<b2*max-b1<<" "<<c2*max-c1<<" "<<d2*max-d1;
		cout<<endl;
	}
}
