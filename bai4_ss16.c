#include<stdio.h>
void printfArr(int *arr, int *length);
int main(void){
    int arr[]={1,2,3,4,5};
    int length= sizeof(arr)/sizeof(int);
    printfArr(arr,&length);
    return 0;
}
void printfArr(int *arr, int *length){
    for(int i=0; i<*length; i++){
        printf("arr[%d]= %d \n", i, *(arr +i));
    }
}
