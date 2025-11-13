#include <stdio.h>
void square(int n);
void sq(int *n);

int main() {
int num=4;

square(num); // call by value
printf("num = %d\n",num);

sq(&num);
printf("num = %d\n",num); // call by reference

    return 0;
}
void square(int n) 
{
    n = n * n;
    printf("square = %d\n",n);
}
void sq(int *n) //made changes in address
{
    *n = (*n) * (*n); //4*4
    printf("square = %d\n",*n);

}