//daysUntil
//by willr0

#include <stdio.h>

int main(void) {
    
    int m1;
    int m2;
    int d1;
    int d2;
    int startDay = 0;
    int endDay = 0;
    int days;
    int dayMax = 31;
    int currentDay = 0;
    
    // Prompt for date
    printf("Start date?\n");
    // Assign values to variables
    scanf("%i %i", &m1, &d1);
    // Start month validation
    if(m1 > 12 | m1 < 0) {
        printf("Incorrect month entered.\n");
        return 0;
    }
    switch(m1) {
        case 1:
            currentDay = 0;
            startDay = currentDay + d1;
            break;
        case 2:
            currentDay = 31;
            startDay = currentDay + d1;
            dayMax = 28;
            break;
        case 3:
            currentDay = 59;
            startDay = currentDay + d1;
            break;
        case 4:
            currentDay = 90;
            startDay = currentDay + d1;
            dayMax = 30;
            break;
        case 5:
            currentDay = 120;
            startDay = currentDay + d1;
            break;
        case 6:
            currentDay = 151;
            startDay = currentDay + d1;
            dayMax = 30;
            break;
        case 7:
            currentDay = 181;
            startDay = currentDay + d1;
            break;
        case 8:
            currentDay = 212;
            startDay = currentDay + d1;
            break;
        case 9:
            currentDay = 242;
            startDay = currentDay + d1;
            dayMax = 30;
            break;
        case 10:
            currentDay = 273;
            startDay = currentDay + d1;
            break;
        case 11:
            currentDay = 303;
            startDay = currentDay + d1;
            dayMax = 30;
            break;
        case 12:
            currentDay = 334;
            startDay = currentDay + d1;
            break;
        default:
            currentDay = 0;
    }
    
    // Start day validation
    if(d1 > dayMax){
        printf("Incorrect date entered! Check your days.\n");
        return 0;
    }
    // Prompt for second date
    printf("End date?\n");
    // Assign values to variables
    scanf("%i %i", &m2, &d2);
    // End month validation
    if(m1 > 12 | m1 < 0) {
        printf("Incorrect month entered.\n");
        return 0;
    }
        
    switch(m2) {
        case 1:
            currentDay = 0;
            endDay = currentDay + d2;
            break;
        case 2:
            currentDay = 31;
            endDay = currentDay + d2;
            break;
        case 3:
            currentDay = 59;
            endDay = currentDay + d2;
            break;
        case 4:
            currentDay = 90;
            endDay = currentDay + d2;
            break;
        case 5:
            currentDay = 120;
            endDay = currentDay + d2;
            break;
        case 6:
            currentDay = 151;
            endDay = currentDay + d2;
            break;
        case 7:
            currentDay = 181;
            endDay = currentDay + d2;
            break;
        case 8:
            currentDay = 212;
            endDay = currentDay + d2;
            break;
        case 9:
            currentDay = 242;
            endDay = currentDay + d2;
            break;
        case 10:
            currentDay = 273;
            endDay = currentDay + d2;
            break;
        case 11:
            currentDay = 303;
            endDay = currentDay + d2;
            break;
        case 12:
            currentDay = 334;
            endDay = currentDay + d2;
            break;
        default:
            currentDay = 0;
        }
        
    // End day validation
    if(d2 > dayMax) {
        printf("Incorrect date entered. Check days.\n");
        return 0;
    }
    // Secondary month validation
    else if(m2 < m1) {
        printf("Time travel error!\n");
        return 0;
    }

    // Answer message
    days = endDay - startDay;
    printf("%i\n", days);
    return 0;
}
