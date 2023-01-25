#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int r;
	cin>>r;
	if(r>0 && r<=50)
	{
	    cout<<100;
	}
	else if(r<=100 && r>50)
	{
	    cout<<50;
	}
	else
	{
	    cout<<0;
	}
	return 0;
}