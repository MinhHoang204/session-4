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
        printf("��y l� m?t tam gi�c ");
        if (a == b && b == c) {
            printf("d?u.\n");
        } else if (a == b || b == c || a == c) {
            if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
                printf("vu�ng c�n.\n");
            } else {
                printf("c�n.\n");
            }
        } else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
            printf("vu�ng.\n");
        } else {
            printf("thu?ng.\n");
        }
    } else {
        printf("��y kh�ng ph?i l� m?t tam gi�c.\n");
    }
    return 0;
}
