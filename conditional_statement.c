#include<stdio.h>
#include<stdbool.h>



int main(){
 
//    int n,a,b;
//    printf("Enter your expected range(e.g.,[a.b]): ");
//    scanf("%d.%d",&a,&b);
//    char *numbers[] ={"One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
//    for(n = a ; n <= b ; n++){
//          if(n >= 1 && n <= 9){
//              printf("%s\n",numbers[n-1]);

//        }else if(n > 9){
//               if(n % 2 == 0){
//                     printf("Even\n");
//               }else{
//                     printf("Odd\n");
//               }   
//          }
//    }
   

    // switch(n){
    //     case 1:
    //         printf("One\n");
    //         break;
    //     case 2:
    //         printf("Two\n");
    //         break;
    //     case 3:
    //         printf("Three\n");
    //         break;
    //     case 4:
    //         printf("Four\n");
    //         break;
    //     case 5:
    //         printf("Five\n");
    //         break;
    //     case 6:
    //         printf("Six\n");
    //         break;
    //     case 7:
    //         printf("Seven\n");
    //         break;
    //     case 8:
    //         printf("Eight\n");
    //         break;
    //     case 9:
    //         printf("Nine\n");
    //         break;
    //     default:
    //         printf("greater than 9\n");
    //         break;
    // }


    // int numbers[LENGTH];
    // int sum = 0;
    
    // //Complete the code to calculate the sum of the five digits.
    // for(int i = 0 ; i < LENGTH ; i++){
    //     printf("Enter Number[%d]: ",i+1);
    //     scanf("%d",&numbers[i]);
    // }
    // printf("\n");
    // for(int i = 0 ; i < LENGTH ; i++){
    //     sum += numbers[i];
    // }
    // printf("%d\n",sum);

    
    //Given a five digit integer, print the sum of its digits.
    //input format
    //The input contains a single five digit number, n.

    // printf("%d\n",2568 % 10); 
    // printf("%d\n",2568 / 10);

    /*
    Use the modulus operator (%) to get the last digit of the number.

        Example: 10564 % 10 = 4 (last digit).

        Use the division operator (/) to remove the last digit from the number.

        Example: 10564 / 10 = 1056 (removes the last digit).
    */


    //  int n = 35987;
    //  int digit1 = n / 10000;  //extract the first digit.result is 3
    //  printf("first digit- %d\n",digit1); 
    

    //  int digit2 = (n / 1000) % 10; //extract the second digit.result is 5
    //  printf("second digit- %d\n",digit2);


    //  int digit3 = (n / 100) % 10; //extract the third digit.result is 9 
    //     printf("third digit- %d\n",digit3);

    //     int digit4 = (n / 10) % 10; //extract the fourth digit.result is 8
    //     printf("fourth digit- %d\n",digit4);

    //     int digit5 = n % 10; //extract the fifth digit.result is 7
    //     printf("fifth digit- %d\n",digit5);

    //    int sum = digit1 + digit2 + digit3 + digit4 + digit5;
    //      printf("Sum of the digits: %d\n",sum);

     int n;
     printf("Enter a five digit number: ");
     scanf("%d",&n);

    int sum = 0;
    while(n > 0){
        sum +=n % 10;
        n /= 10;
    }
    printf("Sum of the digits: %d\n",sum);

     




    return 0;
}