#include<stdio.h>
void sumNumber(int *a, int *b, int *sum);
int main(void){
    int number1=10;
    int number2=20;
    int sum;
    sumNumber( &number1, &number2, &sum);
    printf("Tong cua number1 va number2 la: %d \n", sum);
    return 0;
}
void sumNumber(int *a, int *b, int *sum){
    *sum= *a + *b;
}
