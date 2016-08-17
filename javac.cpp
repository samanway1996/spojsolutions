#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
int main()
{
	ll t,i,j,l,m,mode;
	
		char s[103],s2[5000];
		while(scanf("%s",s)!=EOF)
		{
			l=strlen(s);
			mode=0;
			
			for(i=0;i<l;i++)
			{
				if(s[0]=='_') 
				{
					mode=3;
					break;
				}
				if(s[0]<='Z' && s[0]>='A')
				{
					mode=3;
					break;
				}
				
				if(mode==0)
				{
					if(s[i]=='_') mode=1;
					if(s[i]<='Z' && (s[i]>='A'))
					mode=2;
				}
				else if(mode==1)
				{
					if(s[i]<='Z' && (s[i]>='A')) 
					{
						mode=3;
						break;
					}
				}
				else
				{
					if(s[i]=='_') 
					{
						mode=3;break;
					}
					
				}
				
			}
			if(s[l-1]=='_')
			{
				mode=3;
			}
			if(mode==0)
			{
				cout<<s<<endl;
				continue;
			}
			if(mode==3)
			{
				cout<<"Error!"<<endl;
				continue;
			}
			if(mode==1)
			{
				j=0;
				m=0;
				for(i=0;i<l;i++)
				{
					if(s[i]=='_')
					{
						if(m==1)
						{
							mode=3;
							break;
						}
						m=1;
						continue;
					}
					else
					{
						if(m==1)
						{
							s2[j]=s[i]-32;
							j++;
							m=0;
							//cout<<s2[j-1]<<" ";
						}
						else
						{
							s2[j]=s[i];
							j++;
							m=0;
							//cout<<s2[j-1]<<" ";
						}
					}
					
				}
				if(mode==3)
				{
					cout<<"Error!\n";
					continue;
				}
				s2[j]='\0';
				cout<<s2<<"\n";
				continue;
			}
			if(mode==2)
			{
				j=0;
				for(i=0;i<l;i++)
				{
					if(s[i]>='A' && s[i]<='Z')
					{
						s2[j]='_';
						j++;
						s2[j]=s[i]+32;
						j++;
					}
					else
					{
						s2[j]=s[i];
						j++;
					}
					
				}
				s2[j]='\0';
				cout<<s2<<endl;
			}
 		}
		
	
}
