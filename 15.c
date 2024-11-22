#include <stdio.h>
#include <stdbool.h>

bool is_leap_year(int year); 

int main(void) {
    return 0;
}

bool is_leap_year(int year) {
    if(year % 4 != 0) return false;
    else if(year % 100 != 0) return true;
    else if(year % 400 != 0) return false;
    else return true;
}