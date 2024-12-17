#include<stdio.h>
#include<stdlib.h>
// xay dung ham them phan tu
int addElement(int *arr, int value, int index, unsigned long *n);
// cu phap realloc  : arr= realloc(arr,(*n+1) *sizeof(int))
int main(void){
    int *arr;
    unsigned long n;
    int value=0, index=0;
    printf("moi ban nhap so luong phan tu: ");
    scanf("%lu", &n);
    // cap phat bo nho =malloc gom n phan tu
    arr=(int *)malloc(n* sizeof(int)); //= int arr[n];
    for(int i=0; i<n; i++){
        printf("Nhap phan tu thu %d: ", i+1);
        scanf("%d", (arr +i));// = &arr[i]
    }
    printf("Moi ban nhap phan tu muon them: ");
    scanf("%d", &value);
    printf("Moi ban nhap dia chi muon them: ");
    scanf("%d", &index);
    // goi ham them phan tu
    addElement(arr, value, index, &n);
    // in ra cac phan tu
    for(int i=0; i<n; i++){
        printf("%d \t", *(arr+i));// arr[i] cx dc
    }
    
    printf("\n");
    
    return 0;
}
// di trien khai ham
int addElement(int *arr, int value, int index, unsigned long *n){
    // truoc khi them phai ktra xem index thoa man khong
    if(index<0 || index> *n){
        printf("Vi tri them khong hop le \n");
        return 0;
    }
    // vi tri them thoa man
    // di cap phat them o nho cho mang
    arr= realloc(arr,(*n +1) *sizeof(int));
    // tien hanh dich chuyen phan tu
    for(unsigned long i= *n; i>index; i--){
        *(arr+i)=*(arr+i-1);
    }
    *(arr +index)= value;
    (*n)++; // tang kich thuoc len 1
    
    return index;
}
