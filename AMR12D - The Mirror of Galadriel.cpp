#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
int main()
{
	ll tt,mm,mode,kk;
	scanf("%lli",&tt);
	while(tt--)
	{
		char s[1000],a[10000],b[1000];
		scanf("%s",s);
		ll l=strlen(s),i,j,k,l2,g=0;
		for(i=0;i<l;i++)
		{
			for(j=i;j<l;j++)
			{
				for(k=i;k<=j;k++)
				{
					a[k-i]=s[k];
				}
				a[k-i]='\0';
				l2=strlen(a);
				for(k=0;k<l2;k++)
				{
					b[k]=a[l2-1-k];
				}
				b[l2]='\0';
				mode=0;
				for(k=0;k<=l-l2;k++)
				{
					mm=0;
					for(kk=0;kk<l2;kk++)
					{
						if(b[kk]==s[kk+k])
						continue;
						else
						{
							mm=1;
							break;
						}
					}
					if(mm==0)
					{
						mode=1;
						break;
					}
				}
				if(mode==0)
				{
					g=1;
					break;
				}
			}
		}
		if(g==1)
		{
			printf("NO\n");
		}
		else printf("YES\n");
	}
}
