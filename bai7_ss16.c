#include<stdio.h>
void arr(int *arr, int size);
int main(void){
    int array[] = {4,2,6,5,1,3};
    int size = sizeof(array)/sizeof(array[0]);
    printf("Mang truoc khi sap xep: ");
    for(int i=0; i<size; i++){
        printf("%d ", *(array+i));
    }
    printf("\n");
    arr(array, size);
    printf("Mang sau khi sap xep: ");
    for(int i=0; i<size; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}
void arr(int *arr, int size){
    for(int i=0; i<size-1; i++){
            for(int j=0; j<size-i-1; j++){
                if(*(arr+j) > *(arr+j+1)){
                    int temp = *(arr+j);
                    *(arr+j) = *(arr+j+1);
                    *(arr+j+1) = temp;
                }
            }
        }

}
