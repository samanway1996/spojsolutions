#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
 
 int main()
 {
 	ll n,t=1;;
 	cin>>n;
 	while(n--)
 	{
 		ll a;
 		cin>>a;
 		if(a==3)
 		{
 			printf("Case %lli: 2 3\n",t);
 			t++;
 			continue;
		}
 		if(a%2==0)
 		{
 			printf("Case %lli: %lli %lli\n",t,a/2,a);
		}
		else
		{
			
			printf("Case %lli: %lli %lli\n",t,a/2,a-1);
		}
		t++;
	 }
 }
