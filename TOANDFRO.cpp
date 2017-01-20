#include"bits/stdc++.h"
using namespace std;
int main()
{
	while(1)
	{
	
	int n,i,j,k;
	scanf("%d",&n);
	if(n==0) break;
	char a[204];
	scanf("%s",a);
	int l=strlen(a);
	int arr[l];
	i=0,j=0,k=0;
	while(1)
	{
		j=0;
		//if(j*n+k>=l) break;
	//j=0;
	
	while(1)
	{
		if(j*n+k>=l) break;
		arr[i]=j*n+k;
		//cout<<(j*n+k)<<" ";
		i++;
		j=j+2;
		if((j*n-1-k)>=l)
		break;
		arr[i]=j*n-1-k;
		//cout<<(j*n-1-k)<<" ";
		i++;
		//cout<<"ok\n";
	}
	//cout<<"ok"<<endl;
	k++;
	if((l/n)%2!=0)
	{
		if(j*n-1-k==(l-1)) break;
	}
	else
	{
		if(j*n-1-k==(l-1-n)) break;
		
	}
	}
	//cout<<i<<endl;
	for(i=0;i<l;i++)
	{
		cout<<a[arr[i]];
	}
	cout<<endl;
	}
	
}
