#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
        int v1 = 0;
        int v2 = 0;

        if(argc != 2)
                exit(0);
        v1 = 1;
        while(v1 <= 9)
        {
                v2 = 1;
                while(v2 <= 9)
		{
                        printf("%d\n", v1 * v2);
                	v2 = v2 + 1;
		}
		v1 = v1 + 1;
        }

        return 0;
}
