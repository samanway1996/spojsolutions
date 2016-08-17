#include"bits/stdc++.h"
#define ll long long int
#define mod 1000000007
using namespace std;
ll arr[1000001];
int main()
{
	ll i;
	for(i=0;i<1000001;i++)
	{
		arr[i]=i*i;
	}
	for(i=0;i<100;i++)
	{
		cout<<arr[i]<<" ";
	}
}
