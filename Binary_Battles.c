#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t) ;
	while(t--)
	{
        int n, a, b, c ,m;
	    scanf("%d%d%d", &n, &a, &b) ;
	    c = 0 ;
	    m = n ;
	    while(m!=1)
        {
            m = m/2 ;
            c++ ;
        }
        printf("%d\n", c*a + (c-1)*b) ;
	}
	return 0;
}