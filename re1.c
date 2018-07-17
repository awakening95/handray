#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
        char buf1[1024];
	strcpy(buf1, *(argv + 1));
	return 0;
}
