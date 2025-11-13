#include <stdio.h>
int max(int *a, int *b)
{
    if(*a>*b)
        return *a;
    else
    return *b;
}

int main() {
    int x,y;
    printf("enter x ");
    scanf("%d",&x);
     printf("enter y ");
    scanf("%d",&y);
    int result = max(&x,&y);
    printf("max=%d",result);

    return 0;
}
//max between 2 nums using pointer