#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
   printf("Hellooo!\n");
   printf("    /|\n");
   printf("   / |\n");
   printf("  /  |\n");
   printf(" /___|\n");

   printf("======================================\n");
   //variables
   char name[] = "Sarah"; //when want to use string of characters, use brackets
   int age = 21;

   printf("hii my name is %s\n", name);
   printf("im %d years old\n", age);
   printf("i like number %f, and with %s name ",500.7 , "Sarahhhh");
   printf("%f\n", pow(2,3) );

    //user input
   char hobby[20];
   double gpa;
   printf("Enter your gpa : ");
   scanf("%lf", &gpa); //using lf when using scanf

   //using fgets and stdin as standadts input if u want to use multiple word
   printf("Your GPA is %f\n", gpa);
//    printf("enter your hobby :");
//    fgets(hobby, 20, stdin);
//    printf("Your hobby is %s", hobby);


   return 0;
}

//gcc hello.c -o out
//./out

