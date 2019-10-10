#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/resource.h>


int main()
{
    int *ptr;
    struct rusage usage;

    for (int i=0; i<10; i++)
    {
        memset(ptr, 0, 10240);
        printf("%d\n", getrusage(RUSAGE_SELF, &usage));
        sleep(1);
    }
    return 0;
}