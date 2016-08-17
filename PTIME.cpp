#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back

ll prime[10008];
ll fact[10008][15];
ll cn[10008];
ll ct[10008];

void ini()
{
	ll i,j;
	for(i=4;i<10008;i+=2)
	{
		prime[i]=1;
	}
	prime[0]=1;
	prime[1]=1;
	for(i=3;i*i<10008;i++)
	{
		if(prime[i]==0)
		{
			j=3*i;
			while(j<10008)
			{
				prime[j]=1;
				j+=2*i;
			}
		}
	}
	for(i=2;i<10008;i++)
	{
		if(prime[i]==0)
		{
			j=i;
			while(j<10008)
			{
				fact[j][cn[j]]=i;
				cn[j]++;
				j+=i;
			}
		}
	}
//	for(i=0;i<101;i++)
//	{
//		cout<<i<<" : ";
//		for(j=0;j<cn[i];j++)
//		{
//			cout<<fact[i][j]<<" ";
//		}
//		cout<<endl;
//	}
}

int main()
{
	ini();
	ll n,i,j,k,l,m=0;
	scanf("%lli",&n);
	
	
	for(i=n;i>=2;i--)
	{
		l=i;
		for(j=0;j<cn[i];j++)
		{
			k=fact[i][j];
			
			while(l%k==0)
			{
				l/=k;
				ct[k]++;
			}
		}
	}
	for(i=0;i<10008;i++)
	{
		if(ct[i])
		{
			if(m==1)
			{
				cout<<"* ";
				cout<<i<<"^"<<ct[i]<<" ";
			}
			else
			{
				cout<<i<<"^"<<ct[i]<<" ";
				m=1;
			} 
			
			
		}
	}
}
