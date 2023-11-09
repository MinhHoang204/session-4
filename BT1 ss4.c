#include <stdio.h>

int main() {
    int n;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);
    if (n % 15 == 0) {
        printf("%d chia het cho ca 3 va 5.\n", n);
    } else {
        printf("%d không chia het cho ca 3 va 5.\n", n);
    }
    return 0;
}
