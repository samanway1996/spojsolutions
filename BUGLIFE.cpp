#include<bits/stdc++.h>
using namespace std;
#define ll long long
int visited[2002],pre,present,mode;
int sex[2002];
vector<int> v[2002];
void initialize()
{
	for(int i=0;i<2002;i++)
	{
		visited[i]=0;
		v[i].clear();
		sex[i]=0;
		
	}
	mode=0;
}
void dfs(int node)
{
	
	int i;
	
	visited[node]=1;
	if(pre==1)
	{
		sex[node]=2;
		//pre=2;
	}
	else
	{
		sex[node]=1;
		//pre=1;
	}
//	cout<<node<<" ";
	for(i=0;i<v[node].size();i++)
	{
//		cout<<"k";
		pre=sex[node];
		if(visited[v[node][i]]==0 )
		{
			
			dfs(v[node][i]);
			
		}
		else 
		{
			if(pre==sex[v[node][i]])
			{
				//cout<<"\nSUS:"<<v[node][i]<<" "<<pre<<endl;
				mode=1;
				return;
			}
		}
		if(mode==1) return;
	}					
	
}
int main()
{
	int t,n,r,x,y,i,j,o=0;
	scanf("%d",&t);
	while(t--)
	{
		o++;
		scanf("%d%d",&n,&r);
		initialize();
		
		while(r--)
		{
			scanf("%d%d",&x,&y);
			v[x].push_back(y);
			v[y].push_back(x);
		}
//		for(i=1;i<=n;i++)
//		{
//			cout<<i<<" : ";
//			for(j=0;j<v[i].size();j++)
//			{
//				cout<<v[i][j]<<" ";
//			}
//			cout<<endl;
//		}
		r=0;
		for(i=1;i<=n;i++)
		{
			if(visited[i]==0)
			{
				pre=-1;
				dfs(i);
				r++;
				if(mode==1)
				{
//					for(j=1;j<=n;j++)
//					{
//						cout<<sex[j]<<" ";
//					}
					printf("Scenario #%d:\n",o);
					printf("Suspicious bugs found!\n");
					break;
				}
				
			}
		}
		if(mode==0) 
		{
//			for(j=1;j<=n;j++)
//					{
//						cout<<sex[j]<<" ";
//					}
			printf("Scenario #%d:\n",o);
			printf("No suspicious bugs found!\n");
		}
		
	}
}
