#include <stdio.h>

int main()
{
    // Khai b�o c�c bi?n
    float luong_co_ban, ngay_cong, luong_nhan_vien;
    int so_ngay_cong = 26;

    // Nh?p v�o l��ng c� b?n v� ng�y c�ng th?c t?
    printf("Nhap vao luong co ban: ");
    scanf("%f", &luong_co_ban);
    printf("Nhap vao ngay cong thuc te: ");
    scanf("%f", &ngay_cong);

    // T�nh l��ng nh�n vi�n
    if (ngay_cong <= so_ngay_cong)
    {
        // N?u ng�y c�ng nh? h�n ho?c b?ng ng�y c�ng trong th�ng
        luong_nhan_vien = luong_co_ban * (ngay_cong / so_ngay_cong);
    }
    else
    {
        // N?u ng�y c�ng l?n h�n ng�y c�ng trong th�ng
        luong_nhan_vien = luong_co_ban * (1 + 1.5 * (ngay_cong - so_ngay_cong) / so_ngay_cong);
    }

    // In ra m�n h?nh l��ng nh�n vi�n
    printf("Luong nhan vien la: %.2f\n", luong_nhan_vien);

    return 0;
}
