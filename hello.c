//gcc hello.c -o out
//./out

#include <stdio.h>
#include <string.h>
#include <math.h>


//function
//void is a function that isnt return any type of value/information
void greetings(char major[], int level){
    printf("Hello im majoring in %s , and on %d levels\n", major,level);
}
double cubing (double num);

//struct
struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

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
    printf("The answer of this cubing is %f\n", cubing(4));

    //switch
    char grades = 'C';

    switch(grades) {
        case 'A':
        printf(" Goodd bingits\n");
        break;
        case 'B':
        printf("Bisalah\n");
        break;
        case 'C':
        printf("No no\n");
        break;
        default: 
        printf("Invalid\n");
    };

    //structs
    struct Student student1;
    student1.age = 21;
    student1.gpa = 3.33;
    strcpy(student1.name, "Budi Hartono");
    strcpy(student1.major, "Software Engineering");

    printf("%s\n", student1.name);

//while loop
    int index = 1;
    while(index <= 5){
        printf("%d\n", index);
        index++;
    }
    //when its comes to do while, it will return the value although the condition is not fulfilled
   return 0;
};

//return type
double cubing (double num){
    return num * num * num;
};





