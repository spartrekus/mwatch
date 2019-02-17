
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

int main( int argc, char *argv[])
{
     int c, n;
     int gameover = 0;

	n = 0;
	if(argc < 3) 
        {
		printf("msleep needs argument, time and command.\n");
		return(0);
	}

	char *s = argv[1];
	char *p = argv[2];

    while(c = *s++) 
    {
		if(c<'0' || c>'9') {
			printf("bad character\n");
			return(0);
		}
		n = n*10 + c - '0';
    }

    while( gameover == 0 ) 
    {
        printf( "Unix Time: %d\n", (int)time(NULL));
        printf( "Command: %s\n", p );
	system( p );

	sleep( n );
    }
}


