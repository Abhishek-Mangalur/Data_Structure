#include <stdio.h>

int main()
{
    int var = 11;
    int *p;
    p = &var;
    printf("1.%d\n",p);   //variable address
    printf("2.%d\n",*p);  //variable value
    printf("3.%u\n",p);   //variable address
    printf("4.%u\n",*p);  //variable value
    printf("5.%p\n",p);   //variable address in hexadecimal
    printf("6.%p\n",*p);  //variable value in hexadecimal
    printf("7.%X\n",p);   //variable address in pure hexadecimal
    printf("8.%X\n",*p);  //variable value in pure hexadecimal
    printf("9.%d\n",&p);  //pointer address
    printf("0.%d\n",&*p); //variable address
    return 0;
}