#include<stdio.h>
void addNumber(int *arr, int number, int index);
int main(void){
    int arr[]={1,2,3,4,5};
    int length=sizeof(arr)/ sizeof(int);
    int number, index;
    for(int i=0; i<length; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Moi ban nhap phan tu muon them: ");
    scanf("%d", &number);
    printf("Moi ban nhap vi tri muon them: ");
    scanf("%d", &index);
    addNumber( arr, number, index);
    if( index>= length){
        length = index+1;
    }else if( index<0){
        return 1;
    }else{
        length ++;
    }
    for(int i=0; i<length; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
void addNumber(int *arr, int number, int index){
    if(index>= 5){
        for( int i=5; i<=index; i++){
            *(arr + i)= 0;
        }
        *(arr +index)= number;
    }else if( 0<=index && index< 5){
        for(int i=5; i>=index; i--){
            *(arr +i)= *(arr +i-1);
        }
        *(arr + (index))= number;
    }else{
        printf("Vi tri muon them khong hop le \n");
    }
    
}
