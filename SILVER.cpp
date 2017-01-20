#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	int n;
	while(1)
	{
		cin>>n;
		if(n==0) break;
		int c=0;
		while(n>1)
		{
			n=n/2;
			c++;
		}
		cout<<c<<"\n";
	}
	return 0;
}
