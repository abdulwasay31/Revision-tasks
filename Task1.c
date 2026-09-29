// (26K-3076) Task-1
#include <stdio.h>
int main() {
float distance;
int hour;
float fare;
printf("Enter distance traveled (km): ");
scanf("%f", &distance);
if (distance <= 0) {
    printf("Invalid Distance\n");
return 0;
}
printf("Enter hour of the day (0-23): ");
scanf("%d", &hour);
fare = 50.0;

if (distance > 1) {
    fare += (distance - 1) * 22.0;
}

if (hour < 6 || hour > 22) {
fare += 40.0;
}
printf("Total Fare: Rs %.2f\n", fare);
return 0;
}
