#include<stdio.h>
void traversal(int arr[] , int n){
    for(int i = 0; i < n; i++){
        printf("%d\t" , arr[i]);
    }
    printf("\n");
}
 int insertion(int arr[] , int size , int element , int index , int capacity){
    if(size>=capacity){
        return -1;
    }
    for(int i = size-1;i>=index;i--){
        arr[i+1] = arr[i ];
    }
    arr[index] = element;
    return 1;
 }

int main(){
    int arr[10] = {7 , 12 , 56 , 78 , 88};
    int size = 5  , element = 12 , index = 4;
    printf("Before Insertion \n");
    traversal(arr , size);
    insertion(arr , size , element , index , 10);
    size+=1;
    printf("After insertion \n");
    traversal(arr , size);
    
    return 0;
}