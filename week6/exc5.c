#include <stdio.h> 
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <signal.h> 
  
int main() 
{ 
	if (fork() == 0) 
        {	
		while(1)
		{
			printf("I'm alive\n");
			sleep(1);
		} 
	}
    	else
	{
        	sleep(10);
		kill(0, SIGTERM);
	}

    	return 0; 
} 
