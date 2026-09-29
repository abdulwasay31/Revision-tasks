// (26K-3076) Task-2
#include <stdio.h>
int main() {
float bill;
float discount = 0.0;
float payable;
int membership;
printf("Enter total bill amount ");
scanf("%f", &bill);
printf("Enter membership status (1=member, 0=non-member) ");
scanf("%d", &membership);
if (bill < 500) {
discount = 0.0;
} else if (bill >= 500 && bill <= 1999) {
if (membership == 1) {
    discount = bill * 0.10; 
} else {
    discount = bill * 0.05; 
}
} else { 
if (membership == 1) {
    discount = bill * 0.15; // 15%
} else {
    discount = bill * 0.08; // 8%
}
}
payable = bill - discount;
printf("Discount Amount: Rs %.2f\n", discount);
printf("Final Payable Amount: Rs %.2f\n", payable);
return 0;
}
