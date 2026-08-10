#include <stdio.h>

int describe_day(int day) {
    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");   // never executed
            break;
        case 4:
            printf("Thursday\n");    // never executed
            break;
        default:
            printf("Unknown\n");     // never executed
            break;
    }
    return day;
}

int guarded_divide(int a, int b) {
    if (b == 0) {
        printf("division by zero\n");  // never executed
        return 0;
    }
    return a / b;
}

int main() {
    describe_day(1);
    describe_day(2);
    int r = guarded_divide(10, 2);
    printf("r=%d\n", r);
    return 0;
}
