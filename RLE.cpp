#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
int main()
{
	char s[1000000];
	while(scanf("%s",s)!=EOF)
	{
		ll l=strlen(s),i;
		vector<pair<ll,ll> > v;
		ll c=1;
		char a=s[0];
		for(i=1;i<l;i++)
		{
			if(s[i]==a)
			{
				c++;
			}
			else
			{
				v.pb(pair<ll,ll> (c,a-'a'));
				c=1;
				a=s[i];
			}
		}
		v.pb(pair<ll,ll> (c,a-'a'));
		
		ll sz=v.size();
		for(i=0;i<sz;i++)
		{
			if(v[i].first==1)
			printf("%c",'a'+v[i].second);
			if(v[i].first==2)
			{
				printf("%c",'a'+v[i].second);
				printf("%c",'a'+v[i].second);
			}
			if(v[i].first==3)
			{
				printf("%c",'a'+v[i].second);
				printf("%c",'a'+v[i].second);
				printf("%c",'a'+v[i].second);
			}
			if(v[i].first>3)
			{
				printf("%lli!%c",v[i].first,'a'+v[i].second);
			}
		}
		printf("\n");
	}
}
