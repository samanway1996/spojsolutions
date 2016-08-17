#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define infi 1<<30
#define pb push_back
ll visited[1000000];
//ll dist[100000];
//vector<pair<ll,ll> > vr[100000];

////void initialize()
////{
////	ll i;
////	for(i=0;i<100000;i++)
////	{
////		dist[i]=-infi;
////		//vr[i].clear();
////	}
////}

//void ini()
//{
//	ll i;
//	for(i=0;i<100000;i++)
//	{
//		dist[i]=-infi;
//	}
//}

//void dij(ll ss)
//{
//	dist[ss]=0;
//	ll uu,vv,sz,ii;
//	priority_queue<pair<ll,ll> > pq;
//	pq.push(pair<ll,ll> (0,ss));
//	while(!(pq.empty()))
//	{
//		pair<ll,ll> p=(pq.top());
//		uu=p.first;
//		vv=p.second;
//		pq.pop();
//		sz=vr[vv].size();
//		for(ii=0;ii<sz;ii++)
//		{
//			if( dist[vv]+vr[vv][ii].second>dist[vr[vv][ii].first] )
//			{
//				dist[vr[vv][ii].first]=dist[vv]+vr[vv][ii].second;
//				pq.push(pair<ll,ll> (dist[vr[vv][ii].first],vr[vv][ii].first ));
//			}
//		}
//	}
//}

int main()
{
	ll tt;
	scanf("%lli",&tt);
	while(tt--)
	{
		//initialize();
		
		ll n,i,u,v,c,a,b,m,r;
		scanf("%lli",&n);
		ll dist[n+1];
		vector<pair<ll,ll> > vr[n+1];
		map<string,ll> mp;
		for(i=1;i<=n;i++)
		{
			string s;
			cin>>s;
			mp.insert(pair<string,ll> (s,i));
			scanf("%lli",&m);
			while(m--)
			{
				scanf("%lli%lli",&u,&c);
				vr[i].pb(pair<ll,ll> (u,-c));
			}
		}
		scanf("%lli",&r);
		while(r--)
		{
			for(i=0;i<=n;i++)
			
			{
				dist[i]=-infi;
				visited[i]=0;
			}
			//ini();
			string s1,s2;
			cin>>s1;
			cin>>s2;
			a=mp[s1];
			b=mp[s2];
			ll ss=a;
			dist[ss]=0;
			ll uu,vv,sz,ii;
			priority_queue<pair<ll,ll> > pq;
			pq.push(pair<ll,ll> (0,ss));
			while(!(pq.empty()))
			{
				pair<ll,ll> p=(pq.top());
				uu=p.first;
				vv=p.second;
				pq.pop();
				if(vv==b) break;
				sz=vr[vv].size();
				for(ii=0;ii<sz;ii++)
				{
					if(!visited[vr[vv][ii].first])
					{
					
						if( dist[vv]+vr[vv][ii].second>dist[vr[vv][ii].first] )
						{
							dist[vr[vv][ii].first]=dist[vv]+vr[vv][ii].second;
							pq.push(pair<ll,ll> ( dist[vr[vv][ii].first],vr[vv][ii].first ));
							visited[vr[vv][ii].first]=0;
						}
					}
					visited[vr[vv][ii].first]=0;
				}
			}
			
			
			printf("%lli\n",-dist[b]);
		}
	}
}
