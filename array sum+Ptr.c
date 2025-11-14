#include <stdio.h>

int main() {
int len,i,sum=0;
printf("enter size of array\n");
scanf("%d",&len);
int a[len],*p;
p=a;
printf("enter elements : \n");
for(i=0;i<len;i++)
{
    scanf("%d",(p+i));
}
printf("array elements : \n");
for(i=0;i<len;i++)
{
    printf("%d\n",*(p+i));
}
for(i=0;i<len;i++)
{
    sum+=(*(p+i));
}
printf("sum = %d",sum);
    return 0;
}