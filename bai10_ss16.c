#include<stdio.h>
#include<stdlib.h>
// xay dung ham them phan tu
int deleteElement(int *arr, int index, unsigned long *n);
// cu phap realloc  : arr= realloc(arr,(*n-1) *sizeof(int))
int main(void){
    int *arr;
    unsigned long n;
    int index=0;
    printf("moi ban nhap so luong phan tu: ");
    scanf("%lu", &n);
    // cap phat bo nho =malloc gom n phan tu
    arr=(int *)malloc(n* sizeof(int)); // int arr[n] cx dc
    for(int i=0; i<n; i++){
        printf("Nhap phan tu thu %d: ", i+1);
        scanf("%d", (arr +i));// = &arr[i]
    }
    printf("Moi ban nhap dia chi muon xoa: ");
    scanf("%d", &index);
    // goi ham xoa phan tu
    deleteElement(arr, index, &n);
    // in ra cac phan tu
    for(int i=0; i<n; i++){
        printf("%d \t", *(arr+i));// arr[i] cx dc
    }
    
    printf("\n");
    
    return 0;
}
// di trien khai ham
int deleteElement(int *arr, int index, unsigned long *n){
    // truoc khi xoa phai ktra xem index thoa man khong
    if(index<0 || index> *n){
        printf("Vi tri xoa khong hop le \n");
        return 0;
    }
    // vi tri xoa thoa man
    // tien hanh dich chuyen phan tu
    for(int i= index; i<*n; i++){
        *(arr+i)=*(arr+i+1);
    }
    // giam bo nho cho mang

    arr= realloc(arr,(*n -1) *sizeof(int));
        (*n)--; // tang kich thuoc len 1
    
    return index;
}


