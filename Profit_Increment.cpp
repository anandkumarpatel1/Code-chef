#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,a,b;
	    cin>>x>>y;
	    a = x-y;
	    b = x+((x*10)/100);
	    cout<<b-a<<endl;
	}
	return 0;
}