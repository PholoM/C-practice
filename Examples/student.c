/*
This shows a simple example of how to use a struct
*/

#include <stdio.h>

typedef struct {
    char fname[20];
    char lname[20];
    float grade;
} student;

int main() {
    student s1;
    /*
    s1 =  (student){ .fname = "Pholo", .lname = "Motshidisi", .grade = 89.1};
    s1 =(student) { "Pholo", "Motshidisi", 89.1};
*/
    printf("Enter name, surname and percentage grade: \n");
    scanf("%s %s %f", s1.fname, s1.lname, &s1.grade);


    printf("Student Information: %s %s %3.1f ", s1.fname, s1.lname, s1.grade);
return 0;
}
