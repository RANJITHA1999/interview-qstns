#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i;
    int *ptr= (int *) malloc ( 2 * sizeof(int));
    
    if(ptr == NULL)
    {
        printf("memory not allocated");
        exit(1);
    }
     printf("enter the two numbers");
    for(i=0;i<2;i++)
    {
       
        scanf("%d", ptr+i);
    }
    ptr = (int *) realloc (ptr, 4*sizeof(int));//size should be greater than previos one in order to save old data
    if(ptr == NULL)
    {
      printf("memory not allocated");
        exit(1);
    }
     printf("enter the numbers");
    for(i=2;i<4;i++)
    {
        scanf("%d", ptr+i);
    }
    for(i=0;i<4;i++)
    {
        printf("%d", *(ptr+i));
    }
}

