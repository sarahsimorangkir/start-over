//gcc hello.c -o out
//./out

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//function
//void is a function that isnt return any type of value/information
void greetings(char major[], int level){
    printf("Hello im majoring in %s , and on %d levels\n", major,level);
}
double cubing (double num);

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
   //or u can use %s%s to handle this kind of input
   printf("Your GPA is %f\n", gpa);
//    printf("enter your hobby :");
//    fgets(hobby, 20, stdin);
//    printf("Your hobby is %s", hobby);


//Array
    int luckyNumber[]= {1,2,3,4,5,6,7,8};
    printf("%d\n ", luckyNumber[2]);

    greetings("SWE", 4);
    printf("The answer of this cubing is %f", cubing(4));
   return 0;
}

double cubing (double num){
    return num * num * num;
}





