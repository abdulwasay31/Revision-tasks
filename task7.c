// (26K-3076) Task-7
#include <stdio.h>
int main() {
float battingAverage;
int matchesPlayed;
int fitnessFailed;
printf("Enter batting average");
scanf("%f", &battingAverage);
printf("Enter matches played ");
scanf("%d", &matchesPlayed);
printf("Enter fitness failure status (1=failed, 0=passed) ");
scanf("%d", &fitnessFailed);
if (matchesPlayed < 5) {
printf("Rejected — Insufficient Matches\n");
} else if (fitnessFailed == 1 && battingAverage >= 25 && battingAverage < 35 && matchesPlayed
>= 20) {

printf("Rejected — Fitness\n");
} else if (battingAverage >= 35 && matchesPlayed >= 10) {
printf("Selected\n");
} else if (battingAverage >= 25 && battingAverage < 35 && matchesPlayed >= 20) {
printf("Selected (Experience Quota)\n");
} else if (fitnessFailed == 1) {
printf("Rejected — Fitness\n");
} else {
printf("Not Selected\n");
}
return 0;
}
