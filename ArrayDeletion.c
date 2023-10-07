#include<stdio.h>
void display(int arr[] , int n){
    for(int i = 0 ; i < n; i++){
        printf("%d\t", arr[i]);
    }
}
void deletion(int arr[] , int size , int index){
    for(int i = index ; i <= size-1 ; i++){
        arr[i] = arr[i+1];
    }
}

int main(){
    int arr[10] = {7 , 12 , 56 , 78 , 88};
    int size = 5  , element = 12 , index = 4;
    deletion(arr , size , index);
    size-=1;
    display(arr , size);
    return 0;
}