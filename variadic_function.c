#include<stdio.h>
#include<stdarg.h>


//variadic function to print given arguments
// void print(int n, ...){
//     va_list args;
//     va_start(args,n);
//     for(int i = 0 ; i < n ; i ++){
//        printf("%d ",va_arg(args,int));
       
//     }   
//     printf("\n");
//     va_end(args); 
// }

// int getSum(int n,...){
//  int sum = 0;
//  va_list list;
//  va_start(list,n);
//  for(int i = 0 ; i < n ; i++){
//        sum += va_arg(list,int);
//  }
//     va_end(list);

//     return sum;
// }

void print(int n, ...){
    va_list args;
    va_start(args,n);
    for(int i = 0 ; i < n ; i++){
        if(i % 2 == 0){
            printf("%d\n",va_arg(args,int));
        }else{
            printf("%f\n",va_arg(args,double));
        }
    }
    va_end(args);
}
//driver code
int main(){

    //  print(3,1,2,3,5,8,2,3,10,4,30,25);
    //  print(5,1,2,3,4,5);
    
    //  printf("1 + 2 = %d\n",getSum(2,1,2));
    //  printf("3 + 4 + 5 = %d\n",getSum(3,3,4,5));
    //  printf("6 + 7 + 8 + 9 = %d\n",getSum(4,6,7,8,9));

    print(4,1,2.5,3,4.5);


    return 0;
}
