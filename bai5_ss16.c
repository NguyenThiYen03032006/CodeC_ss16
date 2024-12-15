#include<stdio.h>
void newArr(int *arr, int *index, int *number);
int main(void){
    int arr[]={1,2,3,4,5};
    int index;
    int number;
    int length= sizeof(arr)/sizeof(int);
    printf("Moi ban nhap vi tri muon cap nhat: ");
    scanf("%d", &index);
    if(index>=length || index<0){
        printf("Vi tri cap nhat khong hop le \n");
        return 1;
    }
    printf("Moi ban nhap phan tu can cap nhat: ");
    scanf("%d", &number);
    newArr( arr, &index, &number);
    printf("Mang sau khi cap nhat la: ");
    for(int i=0; i<length; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
void newArr(int *arr, int *index, int *number){
    arr[*index]= *number;

    
}
