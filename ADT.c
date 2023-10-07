#include<stdio.h>
#include<stdlib.h>
struct MyArray
{
    int total_size;
    int used_size;
    int *ptr;
};
void create_ADT(struct MyArray * a , int t_size , int u_size){
    a->total_size = t_size;
    a ->used_size = u_size;
    a->ptr = (int *)malloc(t_size * sizeof(int));
}
void display(struct MyArray *a){
    for(int i= 0; i < a->used_size; i++){
        printf("%d\t" , (a->ptr)[i]);
    }
}
void SetVal(struct MyArray *a){
    int n;
    for(int i = 0; i< a->used_size; i++){
        printf("Enter the Elements:\n");
        scanf("%d", &((a->ptr)[i]));
        ;
    }
}


int main(){
    struct MyArray marks;
    create_ADT(&marks , 10 , 3);
    SetVal(&marks);
    display(&marks);
    
    return 0;
}