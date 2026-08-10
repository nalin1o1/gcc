#include <stdio.h>

int maybe_run(int x) {
    if (x > 0) {
        printf("positive\n");   // this runs
        return 1;
    } else {
        printf("non-positive\n"); // this won't run
        return 0;
    }
}

int main() {
    maybe_run(5);
    return 0;
}