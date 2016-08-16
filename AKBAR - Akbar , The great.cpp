#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back

ll visited[1000009],level[1000009],soldier[1000009];
vector<ll> vr[1000009];
void ini()
{
	ll i;
	for(i=0;i<1000009;i++)
	{
		visited[i]=0;
		level[i]=0;
		soldier[i]=-1;
		vr[i].clear();
	}
}

int main()
{
	ll tt;
	scanf("%lli",&tt);
	while(tt--)
	{
		ini();
		ll n,r,m,a,b,i,j,k,sz;
		scanf("%lli%lli%lli",&n,&r,&m);
		while(r--)
		{
			scanf("%lli%lli",&a,&b);
			vr[a].pb(b);
			vr[b].pb(a);
		}
		ll arr[m][2];
		for(i=0;i<m;i++)
		{
			scanf("%lli%lli",&arr[i][0],&arr[i][1]);
		}
		
		ll mode=0;
		for(i=0;i<m;i++)
		{
			deque<ll> dq;
			dq.push_back(arr[i][0]);
			level[arr[i][0]]=0;
			while(!dq.empty())
			{
				
				j=dq.front();
				//cout<<j<<endl;
				if (soldier[j]==-1 || soldier[j]==i)
				{
					soldier[j]=i;
				}
				else
				{
					//cout<<j<<" EXCEPTION HANDLED "<<endl;
					mode=1;
					break;
				}
				visited[j]=1;
				
				dq.pop_front();
				sz=vr[j].size();
				//cout<<sz<<" sz = "<<endl;
				for(k=0;k<sz;k++)
				{
					if(visited[vr[j][k]]==0 || (visited[vr[j][k]]==1 && soldier[vr[j][k]]!=i))
					{
						
						//cout<<vr[j][k]<<"INS\n";
						if(soldier[vr[j][k]]!=i && soldier[vr[j][k]]!=-1)
						level[vr[j][k]]=level[j]+1;
						
						else if(soldier[vr[j][k]]==-1 && level[vr[j][k]]==0)
						level[vr[j][k]]=level[j]+1;
						
						else if(soldier[vr[j][k]]==-1 && level[vr[j][k]]>level[j]+1)
						level[vr[j][k]]=level[j]+1;
						
						if(level[vr[j][k]]<=arr[i][1] )
					
						dq.pb(vr[j][k]);
						else 
							break;
					}
//					else
//					{
//						cout<<vr[j][k]<<endl;
//						mode=1;
//						break;
//					}
						
					
				}
			}
			if(mode==1) break;
		}
//		for(i=1;i<=n;i++)
//		{
//			cout<<soldier[i]<<" ";
//		}
//		cout<<endl;
		if(mode==1)
		{
			printf("No\n");
			continue;
		}
		for(i=1;i<=n;i++)
		{
			if(soldier[i]==-1)
			{
				mode=1;
				break;
			}
		}
		if(mode==1)
		{
			printf("No\n");
			continue;
		}
		printf("Yes\n");
	}
}
