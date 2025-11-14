#include <stdio.h>

int main() {

int arr[3];
int *ptr;
int i;
ptr = arr;
for(i=0;i<3;i++)
{
    *(ptr+i) = i+1;
}
printf("print values using pointers\n");
for(i=0;i<3;i++)
{
    printf("%d\n",*(ptr+i));
}
printf("print address using pointers\n");
for(i=0;i<3;i++)
{
    printf("%u\n",(ptr+i));
}

    return 0;
}