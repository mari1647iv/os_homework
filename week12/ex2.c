#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char* argv[])
{
    if (argc<3) { printf("Wrong input data"); return 0; }
    FILE *fout;
    for (int i=2; i<argc; i++)
    {
       if((fout = fopen(argv[i], "w"))==NULL)
       {
           printf("File cannot be opened");
           return 0;
       }
       fputs(argv[1], fout);
       fclose(fout);
    }
    return 0;
}