#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

void main(void)
{
	int n=1;
	pid_t fork();
	int pid = getpid();
	printf("Hello from parent %d\n", pid-n);
	printf("Hello from parent %d", pid+n);
}