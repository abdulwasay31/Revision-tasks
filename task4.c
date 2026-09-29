// (26K-3076) Task-4
#include <stdio.h>
int main() {
int capacity;
int currentLevel;
float fillRate;
float remaining; 
float timeRequired;
int billedMinutes;
float electricityCost;
printf("Enter tank capacity (liters): ");
scanf("%d", &capacity);
printf("Enter current water level (liters): ");
scanf("%d", &currentLevel);
printf("Enter motor fill rate (liters per minute): ");
scanf("%f", &fillRate);
if (currentLevel >= capacity) {
    printf("Tank Already Full\n");
return 0;
}
remaining = (capacity - currentLevel);
timeRequired = remaining / fillRate;
if (timeRequired == timeRequired) {
    billedMinutes = timeRequired;
} else {
billedMinutes = timeRequired + 1;
 }
electricityCost = billedMinutes * 3.50;
printf("Required Time: %.2f minutes\n", timeRequired);
printf("Billed Electricity Cost: Rs %.2f\n", electricityCost);
return 0;
}
