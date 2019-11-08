#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main()
{
    int randomData;
    if ((randomData = open("/dev/random", O_RDONLY)) < 0)
    {
        printf("File /dev/random cannot be opened");
        return 0;
    }
    
    char myRandomData[20];
    randomDataLen = read(randomData, myRandomData, 20*sizeof(myRandomData[0]));
    printf("%s", myRandomData);
    close(randomData);
    return 0;
}