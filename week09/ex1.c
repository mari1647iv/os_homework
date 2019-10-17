#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/resource.h>

typedef struct{
    int value;
    int r;
    int counter; 
}Page_frame;

typedef struct{
    Page_frame *p;
    int hit, miss, filled, pages_number;
}Pages;

Pages *aging_create_pages(int n);
Page_frame *aging_reference(Pages *pages, int val);

int main()
{
    FILE *fp;
    fp = fopen("Lab 09 input.txt", "w");
    if ( fp == NULL ) 
    { 
        printf( "Lab 09 input.txt file failed to open.\n" ) ; 
        return 0;
    } 

    printf("Lab 09 input.txt file was opened successfully.\n");
    int n;
    scanf("%d", &n);
    printf("Number of pages frames was read(%d).\n", n);
    Pages *p = aging_create_pages(n);
    printf("Pages was created(hit: %d, miss: %d).\n", (p->hit), (p->miss));
    int page_reference;
    int i=0;

    while(i<n) 
    { 
        fscanf(fp, "%d", &page_reference);
        printf("Reference page %d\n", page_reference);
        fscanf(fp, "%[^ ]", &page_reference);
        ++i;
    }
    printf("All pages was created referenced(hit: %d, miss: %d).\n", (p->hit), (p->miss));

    fclose(fp);
    printf("File was closed.\n\n");

    printf("hit number: %d\n", (p->hit));
    printf("miss number: %d\n", (p->miss));
    printf("hit/miss ratio: %d", (p->hit)/(p->miss));

    return 0;
}

Pages *aging_create_pages(int n)
{
    Pages *p;
    Page_frame *pf =  (Page_frame *) malloc(n*sizeof(Page_frame));
    for (int i=0; i<n; i++)
    {
        (pf+i)->value=0;
        (pf+i)->r=0;
        (pf+i)->counter=0;
    }
    p->p = pf;
    p->hit = 0;
    p->miss = 0;
    p->pages_number=n;
    p->filled=0;
    return p;
}


    Page_frame *aging_reference(Pages *pages, int val)
{
    Page_frame *res;

    int is_exist = 0;
    int min_counter = pages->p->counter, min_index = 0;
    for (int i=0; i<(pages->filled); i++)
    {
        if ((pages->p+i)->value==val) 
        {
            is_exist = 1;
            (pages->p+i)->r = 1;
            res = pages->p+i;
            pages->hit = pages->hit +1;
        }
        (pages->p+i)->counter = (pages->p+i)->counter + (pages->p+i)->r;
        (pages->p+i)->r = 0;
        if ((pages->p+i)->counter < min_counter)
        { 
            min_counter = (pages->p+i)->counter;
            min_index = i;
        }
    }
    if (is_exist==0)
    {
        if ((pages->filled)<(pages->pages_number))
        {
            (pages->p+(pages->filled))->value = val;
            (pages->p+(pages->filled))->r = 1;
            (pages->p+(pages->filled))->counter = 1;
            pages->miss = pages->miss + 1;
            res =(pages->p+(pages->filled));
            pages->filled = pages->filled + 1;
        }
        else
        {
            (pages->p+min_index)->value = val;
            (pages->p+min_index)->r = 1;
            (pages->p+min_index)->counter = 1;
            pages->miss = pages->miss + 1;
            res = pages->p+min_index;
        }
    }
    return res;
}