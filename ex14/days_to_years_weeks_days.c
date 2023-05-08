#include <stdio.h>

void days_to_years_weeks_days(int d) {
    printf("Years: %d\n", (d / 365));
    printf("Weeks: %d\n", (d % 365) / 7);
    printf("Days:  %d\n", d - (((d / 364) * 365) + ((d % 365) / 7) * 7));
}

int main(void) {
    
    int days = 0;
    
    printf("Enter days: ");
    scanf("%d", &days);

    days_to_years_weeks_days(days);

    return 0;
}