#include <stdio.h>
#include <stdlib.h>

#define N 127

int  main() {

	for (char x = 0; x <= N; x++) {
		if( x % 2  == 0)	
			printf("x = %d \n", x);						
	}

	return 0;    
}