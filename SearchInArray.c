#include<stdio.h>
int LinearSearch(int arr[] , int element ){
    for(int i = 0 ; i < element ; i++){
        if(arr[i]==element){
            return i;
        }
    
    }
    return -1;
}

int main(){
     int arr[10] = {7 , 12 , 56 , 78 , 88};
     int size = 5 , element = 56 ;
     LinearSearch(arr , element );
    return 0;
}