#include <stdio.h>
void main()
{
    int a = 10;
    int *p;
    p = &a;
    printf("The value of a is: %d\n",*p);
    printf("The address of a is: %d",p);
}