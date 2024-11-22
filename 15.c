#include <stdio.h>
#include <stdbool.h>

bool is_leap_year(int year); 

int main(void) {
    // if(is_leap_year(2004)) {
    //     printf("Year 2000 is a leap year\n");
    // } else printf("2000 is not a leap year\n");
    for(int y = 2004; y <= 2024; y++) {
        if(is_leap_year(y)) {
            printf("%d kamisya yil\n", y);
        }else {
            printf("%d\n", y);
        }
    }

    return 0;
}

bool is_leap_year(int year) {
    if(year % 4 != 0) return false;
    else if(year % 100 != 0) return true;
    else if(year % 400 != 0) return false;
    else return true;
}