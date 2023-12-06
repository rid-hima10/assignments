//check if a no. is divisible by 3,7,5,8,6
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    if (n % 3 == 0) {
        printf("divisible by 3\n");
    } else {
        printf("not divisible by 3\n");
    }
    if (n % 7 == 0) {
        printf("divisible by 7\n");
    } else {
        printf("not divisible by 7\n");
    }
    if (n % 5 == 0) {
        printf("divisible by 5\n");
    } else {
        printf("not divisible by 5\n");
    }
    if (n % 8 == 0) {
        printf("divisible by 8\n");
    } else {
        printf("not divisible by 8\n");
    }
    if (n % 6 == 0) {
        printf("divisible by 6\n");
    } else {
        printf("not divisible by 6\n");
    }
    return 0;
}
