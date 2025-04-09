#include<stdio.h>

//created function to calculate the sum
int marks_sum (int *marks, int numbner_of_students,char gender);

int main(){
   
   int numbner_of_students;
   char gender;

   printf("Enter number of students: ");
    scanf("%d",&numbner_of_students);

   int marks[numbner_of_students];
   // 0,2,4 = boys
   // 1,3,5,7 = girls
   
   
   for (int students = 0 ; students < numbner_of_students; students++){
        printf("Enter marks of student [%d]: ",students);
        scanf("%d",&marks[students]);
   }
   
   printf("Enter your Gender: ");
   scanf(" %c",&gender);

    //calling the function
    int score_sum = marks_sum(marks,numbner_of_students,gender);
    printf("%d\n",score_sum);



    return 0;
}

int marks_sum (int *marks, int numbner_of_students,char gender){

    int score_sum = 0;
    
    if(gender == 'b'){

        for (int students = 0 ; students < numbner_of_students; students+=2){
            score_sum += marks[students];
      }

    }else if(gender == 'g'){

        for (int students = 1 ; students < numbner_of_students; students+=2){
            score_sum += marks[students];
      }

    }

    return score_sum;

}

// thats the hacker rank solution

/*
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
  //Write your code here.
}


*/





/*
 int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
 
*/