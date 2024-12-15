#include<stdio.h>
void num(int *a, int *b);
int main(void){
    int number1= 10;
    int number2= 20;
    printf("number1= %d\n", number1);
    printf("number2= %d\n", number2);
    num(&number1, &number2);
    printf("number1= %d\n", number1);
    printf("number2= %d\n", number2);
    return 0;
}
void num(int *a, int *b){
    int temp= *a;
    *a=*b;
    *b=temp;
    
}
