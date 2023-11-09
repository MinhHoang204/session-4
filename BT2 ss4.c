#include <stdio.h>

int main() {
    float a, b, c;
    printf("Nh?p c?nh th? nh?t: ");
    scanf("%f", &a);
    printf("Nh?p c?nh th? hai: ");
    scanf("%f", &b);
    printf("Nh?p c?nh th? ba: ");
    scanf("%f", &c);
    if (a + b > c && a + c > b && b + c > a) {
        printf("Ðây là m?t tam giác ");
        if (a == b && b == c) {
            printf("d?u.\n");
        } else if (a == b || b == c || a == c) {
            if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
                printf("vuông cân.\n");
            } else {
                printf("cân.\n");
            }
        } else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
            printf("vuông.\n");
        } else {
            printf("thu?ng.\n");
        }
    } else {
        printf("Ðây không ph?i là m?t tam giác.\n");
    }
    return 0;
}
