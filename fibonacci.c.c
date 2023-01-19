#include <stdio.h>

int main() {
    int t1 = 0, t2 = 1, t3;
    t3 = t1 + t2;
    printf("%d,%d,", t1,t2);
    while (t3 <= 10) {
        printf("%d,", t3);
        t1 = t2;
        t2 = t3;
        t3 = t1 + t2;
    }
    printf("\n");
    return 0;
}