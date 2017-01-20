#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int n,a,d,i;
	while(1)
	{
		cin>>a>>d;
		if(a==0 && d==0 ) break;
		int arr[a],arr2[d];
		for(i=0;i<a;i++)
		{
			cin>>arr[i];
		}
		for(i=0;i<d;i++)
		{
			cin>>arr2[i];
		}
		sort(arr,arr+a);
		sort(arr2,arr2+d);
		if(arr[0]>=arr2[1]) cout<<"N\n";
		else cout<<"Y\n";
	}
	return 0;
} 
