#include <stdio.h>

int main()
{
    char a = 'Z';
    char* b = &a;
    int i = 72;
    int *j = &i;
    printf("the address of i is %p \n", &i);
    printf("the address of i is %p \n", j);
    printf("the address of a is %p \n ", b);

    printf("the value of address b is %d \n", *(&i));
printf("the value of address b is %d \n", *b);
    return 0;
}