#include<stdio.h>
void traversal(int arr[] , int n ){
    for(int i = 0 ; i < n; i++){
        printf("%d\t" , arr[i]);
    }

}

int main(){
    int arr[100] = { 1 , 3, 5 , 8};
    int size = 4;
    traversal(arr , size);
    return 0;
}