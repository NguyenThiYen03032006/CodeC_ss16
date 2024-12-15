#include<stdio.h>
int main(void){
    int number=10;
    int *numPtr= &number;
    printf("Cach 1\n");
    printf("%lu \n",(unsigned long) &number);
    printf("%d \n", number);
    printf("Cach 2\n");
    printf("%lu \n",(unsigned long) numPtr);
    printf("%d \n", *numPtr);
    return 0;
}
