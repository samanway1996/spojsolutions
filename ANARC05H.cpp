#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
 
char s[1000];
 
ll ans(ll indx,ll sm1,ll mode,ll sm2)
{
	ll v=s[indx]-'0';
	if(mode==0)
	{
		ll a=0;
		if(indx==0)
		{
			
			if(v<=sm1) return 2;
			else return 1;
		}
		a+=ans(indx-1,sm1+v,mode,sm2);
		if(v<=sm1)
		{
			a+=ans(indx-1,v,1,sm1);
		}
		return a;
		
	}
	else
	{
		if(indx==0)
		{
			if(v+sm1<=sm2 && v<=sm1) return 2;
			if(v+sm1<=sm2 || v<=sm1) return 1;
			else return 0;
		}
		if(v+sm1<=sm2 && s[indx]-'0'<=sm1) 
		return ans(indx-1,sm1+v,mode,sm2)+ans(indx-1,v,mode,sm1);
		if(v+sm1<=sm2)
		return ans(indx-1,sm1+v,mode,sm2);
		if(v<=sm1)
		return ans(indx-1,v,mode,sm1);
		else
		return 0;
	}
}
 
int main()
{
	ll tt=1;
	while(1)
	{
		
		scanf("%s",s);
		if(s[0]>'9' || s[0]<'0') break;
		ll n=strlen(s);
		if(n==1)
		{
			printf("%lli. 1\n",tt);
		}
		else
		{
			printf("%lli. %lli\n",tt,ans(n-2,s[n-1]-'0',0,0));
		}
		
		tt++;
	}
}
