#include<stdio.h>
int main()
{
    int a[5];
    int *p;
    int i;
    //array input
    p=a;
    printf("enter elements of array\n");
    for(i=0;i<5;i++)
    {
    scanf("%d",(p+i));
    }
     //print elements
     printf("the elements are :\n");
     for(i=0;i<5;i++)
     {
         printf("%d\t",*(p+i));
     }
     //index printing
          for(i=0;i<5;i++)
     {
         printf("%d\t",(p+i));
     }
}