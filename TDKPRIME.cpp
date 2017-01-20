#include<bits/stdc++.h>
#define M 86030000
using namespace std;
int flag[86030000];
#define ll long long int
vector<ll> v;
void primefunction()
{
	long long int i,j,k=0,kk=0;
    for(i=4;i<M;i=i+2)
    {
    	flag[i]=1;
    }
    for(i=3;i*i<M;i=i+2)
	{
		if (flag[i]==0)
		{
			for(j=i*i;j<M;j+=2*i)
			{
				flag[j]=1;
			}
		}
	}
	v.push_back(2);
	kk++;
	for(i=3;i<M;i+=2)
	{
		if(flag[i]==0)
		{
			v.push_back(i);
		}
	}
	//for(i=0;i<100;i++)
	//cout<<flag[i]<<" ";
}
int main()
{
	ll t,n;
	scanf("%lld",&t);
	primefunction();
	while(t--)
	{
		scanf("%lld",&n);
		printf("%lld\n",v[n-1]);
	}
	return 0;
}
