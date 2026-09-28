#include<stdio.h>


int main(){
    int i=6;
    int* j =&i;
    int** k =&j;
    printf("the address of i is %p \n", &i);
    printf("the address of k is %d  \n",*(&i));

    return 0;
}