#include<stdio.h>


int main(){
     
    int x = 20;
    int *ptr;
    ptr = &x;
    printf("Address of x: %p\n",ptr);
   
    printf("Address of x: %d\n",*ptr); //dereference 

    int marks[] = {3,2,5};
    printf("Address of marks: %p\n",marks);
    printf("%p\n",&marks[0]);

    return 0;
}