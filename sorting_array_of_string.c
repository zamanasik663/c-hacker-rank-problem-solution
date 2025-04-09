#include<stdio.h>

int main(){

    int numbers[] = {5,2,4,8,5,1,6,7,10,12,11};

    int size = sizeof(numbers)/sizeof(numbers[0]);
    //sorting the array
    int i,j,temp;

    //sorting logic
    for(i = 0 ; i < size; i++){
      for(j = 0 ; j < size; j++){
          if(numbers[i] > numbers[j]){
              temp = numbers[i];
              numbers[i] = numbers[j];
              numbers[j] = temp;
          }

      }
    }


    for(i = 0 ; i < size; i++){
       printf("%d  ",numbers[i]);
    }
    printf("\n");




//     int a = 20;
//     int b = 10;
//    //sorting 
//    int temp = a;
//    a = b;
//    b = temp;
//    printf("a: %d b: %d\n",a,b);



    return 0;
}