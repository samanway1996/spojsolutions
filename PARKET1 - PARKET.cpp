#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back

int main()
{
	ll r,br;
	scanf("%lli%lli",&r,&br);
	ll a=(r+4)/2;
	ll b=br+r;
	ll c=a*a;
	c-=4*b;
	c=sqrt(c);
	c=(a+c)/2;
	cout<<c<<" "<<a-c<<endl;
}
