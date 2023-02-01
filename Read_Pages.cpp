#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x,y;
	    cin>>n>>x>>y;
	    if((x*y)>=n)
	    {
	        cout<<"YES"<<endl;
	    }
	    else 
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
