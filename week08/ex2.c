#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main()
{
    int *ptr;
    for (int i=0; i<10; i++)
    {
        memset(ptr, 0, 10240);
        sleep(1);
    }
    return 0;
}