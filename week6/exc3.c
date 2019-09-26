#include <stdio.h> 
#include <stdlib.h>
#include <unistd.h>
#include <signal.h> 
  
void handle_sigint();

int main() 
{ 
    	signal(SIGINT, handle_sigint);
	while (1) 
    	{ 
        	sleep(1); 
    	}  
    	return 0; 
} 

void handle_sigint()
{
	printf("Caught signal SIGINT(2)\n");
	exit(1);
}