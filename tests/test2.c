#include <stdio.h>

int classify(int n) {
    if (n < 0) {
        printf("negative\n");   // never executed
        return -1;
    } else if (n == 0) {
        printf("zero\n");       // never executed
        return 0;
    } else {
        printf("positive\n");   // executed
        return 1;
    }
}

int sum_up_to(int n) {
    int total = 0;
    for (int i = 1; i <= n; i++) {
        total += i;             // executed n times
    }
    return total;
}

void unused_helper(void) {
    printf("this whole function is dead code in this run\n");
}

int main() {
    int r = classify(5);
    int s = sum_up_to(4);
    printf("r=%d s=%d\n", r, s);
    return 0;
}