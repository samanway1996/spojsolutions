#include"bits/stdc++.h"
using namespace std;
#define ll long long int
ll arr[1000006],b[1000006];
int main()
{
	ll i,j,k;
	arr[0]=0;
	b[0]=b[1]=b[2]=b[3]=0;
	k=0;
	for(i=4;i<1000006;i++)
	{
		if(i%2==0) k++;
		b[i]=b[i-1]+k;
	}
	//for(i=0;i<10;i++) cout<<b[i]<<" ";
	for(i=1;i<1000006;i++)
	{
		arr[i]=(i*(i-1))/2;
		arr[i]+=2*i-1;
		arr[i]+=b[i];
	}
	for(i=1;i<1000006;i++)
	arr[i]=arr[i-1]+arr[i];
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		scanf("%lli",&n);
		cout<<arr[n]<<endl;
	}
}
