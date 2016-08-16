#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
int main()
{
	ll tt;
	scanf("%lli",&tt);
	char s[1000];
	cin.getline(s,1000);
	while(tt--)
	{
		char s1[1000],s2[1000];
		cin.getline(s1,1000);
		cin.getline(s2,1000);
//		if(k==1)
//		{
//			k++;
//			continue;
//		}
//		//cout<<s<<endl;
//		k++;
		ll l1=strlen(s1),i,j,l2=strlen(s2);
		ll a[26],b[26];
		for(i=0;i<26;i++)
		{
			a[i]=0;
			b[i]=0;
		}
		for(i=0;i<l1;i++)
		{
			if(s1[i]>='A' && s1[i]<='Z')
			{
				a[s1[i]-'A']++;
			}
			if(s1[i]>='a' && s1[i]<='z')
			a[s1[i]-'a']++;
		}
		for(i=0;i<l2;i++)
		{
			if(s2[i]>='A' && s2[i]<='Z')
			{
				b[s2[i]-'A']++;
			}
			if(s2[i]>='a' && s2[i]<='z')
			b[s2[i]-'a']++;
		}
		ll m=0;
		for(i=0;i<26;i++)
		{
			if(a[i]!=b[i])
			{
				m=1;
				break;
			}
		}
		if(m==0)
		{
			printf("YES\n");
			continue;
		}
		
		m=0;
		for(i=0;i<26;i++)
		{
			if(m==0 && a[i]!=b[i])
			{
				if(a[i]>b[i]) m=1;
				else m=-1;
			}
			if(m==1 && a[i]<b[i])
			{
				m=3;
				break;
			}
			if(m==-1 && a[i]>b[i])
			{
				m=3;
				break;
			} 
		}
		if(m==3)
		{
			printf("NO LUCK\n");
			continue;
		}
		ll u,c;
		if(m==1)
		{
			u=0;
			c=0;
			for(i=0;i<26;i++)
			{
				if((a[i]-b[i])%2!=0)
				u++;
				c+=a[i]-b[i];
			}
		}
		if(m==-1)
		{
			u=0;
			c=0;
			for(i=0;i<26;i++)
			{
				if((b[i]-a[i])%2!=0)
				u++;
				c+=b[i]-a[i];
			}
		}
		if(u>1)
		{
			printf("NO LUCK\n");
			continue;
		}
		char ss[10000];
		ss[c]='\0';
		ll p,loc=-1;
		ll k=0;
		ll kk=c-1;
		//cout<<c<<endl;
		for(i=0;i<26;i++)
		{
			if(a[i]>b[i])
			{
				p=(a[i]-b[i])/2;
				if((a[i]-b[i])%2!=0) loc=i;
				for(j=0;j<p;j++)
				{
					ss[k+j]=i+'a';
					ss[kk-j]=i+'a';
					
				}
				k=k+j;
				kk=kk-j;
				//cout<<"1\n";
			}
			if(b[i]>a[i])
			{
				p=(b[i]-a[i])/2;
				if((b[i]-a[i])%2!=0) loc=i;
				for(j=0;j<p;j++)
				{
					ss[k+j]=i+'a';
					ss[kk-j]=i+'a';
				}
				k=k+j;
				kk=kk-j;
				//cout<<"2\n";
			}
		}
		if(loc!=-1)
		{
			ss[c/2]=loc+'a';
		}
		for(i=0;i<c;i++)
		cout<<ss[i];
		cout<<endl;
	}
}
