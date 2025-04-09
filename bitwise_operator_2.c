#include<stdio.h>

//function to find odd occuring elements in an array
int findOdd(int arr[] , int n);

int main(){


    /*
    3. The bitwise XOR operator is the most useful operator from a technical interview perspective.

    It is used in many problems. A simple example could be “Given a set of numbers where all     elements occur an even number of times except one number, find the odd occurring number” This problem can be efficiently solved by doing XOR to all numbers
    */
   /*
    Example
    Below program demonstrates the use XOR operator to find odd occcuring elements in an array.
   */

   int arr[] = { 12, 12, 14, 90, 14, 14, 14 };
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Odd occuring element is: %d\n",findOdd(arr,n));


    int x = 20;
    (x & 1) ? printf("Odd\n") : printf("Even\n");

    return 0;
}
int findOdd(int arr[] , int n)
{
    int res = 0, i;
    for(i = 0 ; i < n ; i ++){
        res ^= arr[i];
    }
    return res;
}