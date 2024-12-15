#include<stdio.h>
void deleteArr(int *arr, int index);
int main(void){
    int arr[]={1,2,3,4,5};
    int length=sizeof(arr)/ sizeof(int);
    for(int i=0; i<length; i++){
        printf("%d ", arr[i]);
    }
    int index;
    printf("\nMoi ban nhap vi tri muon xoa: ");
    scanf("%d", &index);
    if( index<0 || index >= length){
        printf("Vi tri ban muon xoa khong hop le \n");
        return 1;
    }
    deleteArr(arr, index);
    for(int i=0; i<length-1; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
void deleteArr(int *arr, int index){
    for(int i=index; i<4; i++){
        *(arr+i)=*(arr +i+1);
    }
}
