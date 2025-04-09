#include<stdio.h>
#include<stdlib.h>


int solve(int *a, int *b){
  int temp = *a + *b;
  *b = abs(*a - *b);
    *a = temp;
    return 0;  
} 


int main(){


//    char name[20];
//    char str[20];
//     char ch;
//    scanf("%c", &ch);
//    scanf("\n");
//    scanf("%[^\n]%*c", name);
//    scanf("\n");
//    scanf("%[^\n]%*c", str);
   

//    printf("%c\n", ch);
//     printf("%s\n", name);
//     printf("%s\n", str);



    int a = 8, b = 10;
    solve(&a, &b);
    printf("%d %d\n", a, b);





    return 0;
}