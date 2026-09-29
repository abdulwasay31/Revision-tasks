// (26K-3076) Task-8
#include <stdio.h>
int main() {
int mealCategory;
int customerType;
float billAmount;
float serviceCharge = 0.0;
float discount = 0.0;
float finalAmount;
float serviceRate = 0.0;
printf("Enter meal category (1=Fast Food, 2=Desi Food, 3=Chinese) ");
scanf("%d", &mealCategory);
printf("Enter bill amount ");
scanf("%f", &billAmount);
printf("Enter customer type (1=Student, 2=Regular) ");
scanf("%d", &customerType);
if ((mealCategory < 1 || mealCategory > 3) || (customerType < 1 || customerType > 2)) {
printf("Invalid Selection\n");
return 0;
}

switch (mealCategory) {
case 1: 
serviceRate = 0.05;
break;
case 2: 
serviceRate = 0.08;
break;
case 3:
serviceRate = 0.10;
break;
}
serviceCharge = billAmount * serviceRate;
 
if (billAmount >= 1000) {
if (customerType == 1) { 
discount = billAmount * 0.15;
} else { 
discount = billAmount * 0.10;
}
} else { 
if (customerType == 1) { 
discount = billAmount * 0.05;
} else { 
discount = 0.0;
}
}
finalAmount = billAmount + serviceCharge - discount;
printf("Service Charge: Rs %.2f\n", serviceCharge);
printf("Discount: Rs %.2f\n", discount);
printf("Final Payable Amount: Rs %.2f\n", finalAmount);

return 0;
}
