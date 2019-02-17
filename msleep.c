
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main( int argc, char *argv[])
{
	int c, n;
	n = 0;
	if(argc < 2) 
        {
		printf("msleep needs argument.\n");
		return(0);
	}

	char *s = argv[1];
	while(c = *s++) {
		if(c<'0' || c>'9') {
			printf("bad character\n");
			return(0);
		}
		n = n*10 + c - '0';
	}
	sleep( n );
}


