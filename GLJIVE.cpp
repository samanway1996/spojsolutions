#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
int main()
{
	ll arr[10],i,s=0;
	for(i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<10;i++)
	{
		//s+=arr[i];
		if(s+arr[i]<=100) s+=arr[i];
		else 
		{
			if(s+arr[i]-100<= 100-s)
			{
				s+=arr[i];
			}
			break;
		}
	}
	cout<<s<<endl;
}
