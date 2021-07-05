#include<stdio.h>

int isLeapYear(int year) {
    if (year % 400 == 0) {
            return 1;
        }
        if (year % 100 == 0) {
            return 0;
        }
        if (year % 4 == 0) {
            return 1;
        } else {
            return 0;
        }
}

int main() {
    int day;
    int year = 1980;
    printf("Input how many days have passed: ");
    scanf("%d", &day);
    while (day > 365) {
        if (isLeapYear(year) == 1) {
            if (day != 366) {
                day -= 366;
                year += 1;
            } else {
                break;
            }
        } else {
            day -= 365;
            year += 1;
        }
    }
    printf("Current year is: %d \n", year);

    return 0;
}