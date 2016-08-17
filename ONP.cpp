#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
int main()
{
	ll t,i,j,l;
	scanf("%lli",&t);
	while(t--)
	{
		char s[1000];
		scanf("%s",s);
		l=strlen(s);
		s[l]=')';
		
		stack<char> v;
		v.push('(');
		for(i=0;i<=l;i++)
		{
			if(s[i]=='(') v.push(s[i]);
			else if(s[i]>='a' && s[i]<='z')
			{
				printf("%c",s[i]);
			}
			else if(s[i]==')')
			{
				while(v.top()!='(')
				{
					printf("%c",v.top());
					v.pop();
				}
				v.pop();
			}
			else if(s[i]=='^')
			{
				v.push('^');
			}
			else if(s[i]=='/')
			{
				while(v.top()=='^')
				{
					printf("%c",v.top());
					v.pop();
				}
				v.push(s[i]);
			}
			else if(s[i]=='*')
			{
				while(v.top()=='^' || v.top()=='/')
				{
					printf("%c",v.top());
					v.pop();
				}
				v.push(s[i]);
			}
			else if(s[i]=='-')
			{
				while(v.top()=='^' || v.top()=='/' ||  v.top()=='*')
				{
					printf("%c",v.top());
					v.pop();
				}
				v.push(s[i]);
			}
			else 
			{
				while(v.top()=='^' || v.top()=='/' ||  v.top()=='*' || v.top()=='-')
				{
					printf("%c",v.top());
					v.pop();
				}
				v.push(s[i]);
			}
		}
		cout<<endl;
		
	}
}
