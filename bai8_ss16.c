#include<stdio.h>
#include<string.h>
void reverse( char *inputString, int length, char *reverseString);
int main(void){
    char inputString[100];
    printf("Moi ban nhap mot chuoi bat ky: ");
    fgets(inputString, 100, stdin);
    printf("%s \n", inputString);
    int length= (int)strlen(inputString);
    char reverseString[length];
    reverse( inputString, length, reverseString);
    printf("%s \n", reverseString);
    return 0;
}
void reverse( char *inputString, int length, char *reverseString){
    int index=0;
    for(int i=length-2; i>=0; i--){
        reverseString[index] = inputString[i];
        index++;
    }
}
