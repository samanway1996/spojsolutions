#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
int main()
{
	ll n,k=0;
	cin>>n;
	while(n--)
	{
		k++;
		ll s,size,sum=0,i;
		cin>>s>>size;
		ll arr[size];
		for(i=0;i<size;i++)
		{
			scanf("%lli",&arr[i]);
			sum+=arr[i];
		}
		sort(arr,arr+size);
		if(sum<s)
		{
			cout<<"Scenario #"<<k<<":"<<endl;
			cout<<"impossible\n";
			continue;
		}
		ll j=0,l=0;
		for(i=size-1;i>=0;i--)
		{
			l++;
			j+=arr[i];
			if(j>=s)
			{
				cout<<"Scenario #"<<k<<":\n"<<l<<endl;
				break;
			}
		}
		cout<<endl;
		
	}
}
