#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	int n,x=0;
	cin>>n;
	int a[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		x=x^a[i];
	}
	cout<<x<<endl;
	return 0;
}
