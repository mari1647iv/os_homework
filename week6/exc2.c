#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>	

int main()
{
	char inbuf1[13];
	char inbuf2[1];
	int p[2];

	char* msg1 = "Hello, World"; 
	char* msg2 = "";

	if (pipe(p) < 0) 
        exit(1); 

	write(p[1], msg1, 13); 
	write(p[1], msg2, 1);
  
    	read(p[0], inbuf1, 13);
	msg2 = inbuf1;
	read(p[0], inbuf2, 13);
	msg1 = inbuf2;

	fork();
	printf("% s\n", msg1);
    	printf("% s", msg2);

    	return 0;  
}