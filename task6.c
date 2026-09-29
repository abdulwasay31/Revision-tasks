// (26K-3076) Task-6
#include <stdio.h>
int main() {
int overdueDays;
int bookType;
int priority;
float fine = 0.0;
printf("Enter number of overdue days ");
scanf("%d", &overdueDays);
printf("Enter book type (1=Regular, 2=Reference, 3=Rare)");
scanf("%d", &bookType);
printf("Enter priority membership (1=yes, 0=no)");
scanf("%d", &priority);
if (bookType == 1) { 
if (overdueDays <= 7) {
fine = overdueDays * 5.0;
} else {
fine = 7 * 5.0 + (overdueDays - 7) * 10.0;
}
} else if (bookType == 2) { 
fine = overdueDays * 15.0;
} else if (bookType == 3) { 
fine = overdueDays * 30.0;
if (overdueDays > 10) {
printf("Banned from Borrowing\n");
}
}
if (priority == 1 && bookType != 3) {
fine = fine * 0.80; 
}
printf("Fine: Rs %.2f\n", fine);
return 0;
}
