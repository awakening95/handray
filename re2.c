#include <stdio.h>
#include <string.h>

int foo(int a1, int a2, int a3)
{
        int v1 = 0;
        v1 = a1 + a2;

        return v1 + a3;
}

int main()
{
	int v1 = 0;
        long buf[128] = { 0 };
        
        foo(1,2,10);
        printf("%d", foo(5,1,2));
        return 0;
}
