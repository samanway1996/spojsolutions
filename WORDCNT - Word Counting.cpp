#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
int main()
{
	ll tt;
	scanf("%lli",&tt);
	char s[1000000];
	cin.getline(s,1000000);
	while(tt--)
	{
		cin.getline(s,1000000);
		if(strlen(s)==0){
			printf("0\n");
			continue;
		}
		ll l=strlen(s),i,j;
		char s1[100000];
		j=0;
		vector<ll> v;
		for(i=0;i<l;i++)
		{
			if(s[i]==' ' && j!=0)
			{
				s1[j]='\0';
				v.pb(j);
				j=0;	
			}	
			if(s[i]!=' ')
			{
				s1[j]=s[i];
				j++;
			}
		}
		
		if(j!=0)
		{
		
			s1[j]='\0';
			ll kk=strlen(s1);
			v.pb(j);
			j=0;
		}
		
//		for(i=0;i<v.size();i++)
//		{
//			cout<<v[i]<<" ";
//		}
//		cout<<endl;
		
		ll sz=v.size(),c=1,m=0,pre=v[0];
		for(i=1;i<sz;i++)
		{
			if(v[i]!=pre)
			{
				m=max(m,c);
				c=1;
				pre=v[i];
			}
			else
			{
				c++;
			}
		}
		m=max(m,c);
		printf("%lli\n",m);
	}
}
