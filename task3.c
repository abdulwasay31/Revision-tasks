#include <stdio.h>
int main() {
int marks;
char *grade;
char *result;
printf("Enter marks obtained (out of 100): ");
scanf("%d", &marks);
if (marks < 0 || marks > 100) {
printf("Invalid Marks\n");
return 0;
}

if (marks >= 90) {
    grade = "A+";
    result = "Pass";
} else if (marks >= 80) {
    grade = "A";
    result = "Pass";
} else if (marks >= 70) {
    grade = "B";
    result = "Pass";
} else if (marks >= 60) {
    grade = "C";
    result = "Pass";
} else if (marks >= 50) {
    grade = "D";
    result = "Pass";
    } else {
     grade = "F";
     result = "Fail";
}
printf("Grade: %s\n", grade);
printf("Result: %s\n", result);
return 0;
}
