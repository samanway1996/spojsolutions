#include"bits/stdc++.h"
using namespace std;
#define ll long long int
ll b[100007],f[100007];
void u(ll i,ll v)
{
	for(;i<=100002;i+=i&(-i)) b[i]+=v;
}
ll q(ll i)
{
	ll s=0;for(;i>=1;i-=i&(-i)) s+=b[i];return s;
}
int main()
{
	ll n,a,c,i,j=0;
	scanf("%lli",&n);
	while(n--)
	{
		scanf("%lli%lli",&a,&c);
		i=q(a),j=q(c);
		printf("%lli\n",i-f[a]+j-f[c]);
		f[a]=i,f[c]=j;u(a+1,1);u(c,-1);
	}
}
