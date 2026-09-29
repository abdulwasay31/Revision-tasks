// (26K-3076) Task-5
#include <stdio.h>
int main() {
float amount;
float bonus = 0.0;
float finalBalance;
int network, weekend;
printf("Enter mobile load amount: ");
scanf("%f", &amount);
printf("Enter network code (1=Jazz, 2=Telenor, 3=Ufone) ");
scanf("%d", &network);
printf("Enter weekend status (1=weekend, 0=weekday ");
scanf("%d", &weekend);
if (amount < 100) {
bonus = 0.0;
}
else if (amount >= 100 && amount <= 499) {
if (weekend == 1) {
if (network == 3) {
bonus = amount * 0.05;
}
else {
bonus = amount * 0.10;
}
}
else {
bonus = amount * 0.05;
}
}
else {
if (network == 1 || weekend == 1) {
bonus = amount * 0.20;
}
else {
bonus = amount * 0.12;
}
}
finalBalance = amount + bonus;
printf("Bonus: Rs %.2f\n", bonus);
printf("Final Loaded Balance: Rs %.2f\n", finalBalance);
return 0;
}
