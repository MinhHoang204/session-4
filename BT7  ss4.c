#include <stdio.h>

int main()
{
    // Khai báo các bi?n
    float luong_co_ban, ngay_cong, luong_nhan_vien;
    int so_ngay_cong = 26;

    // Nh?p vào lýõng cõ b?n và ngày công th?c t?
    printf("Nhap vao luong co ban: ");
    scanf("%f", &luong_co_ban);
    printf("Nhap vao ngay cong thuc te: ");
    scanf("%f", &ngay_cong);

    // Tính lýõng nhân viên
    if (ngay_cong <= so_ngay_cong)
    {
        // N?u ngày công nh? hõn ho?c b?ng ngày công trong tháng
        luong_nhan_vien = luong_co_ban * (ngay_cong / so_ngay_cong);
    }
    else
    {
        // N?u ngày công l?n hõn ngày công trong tháng
        luong_nhan_vien = luong_co_ban * (1 + 1.5 * (ngay_cong - so_ngay_cong) / so_ngay_cong);
    }

    // In ra màn h?nh lýõng nhân viên
    printf("Luong nhan vien la: %.2f\n", luong_nhan_vien);

    return 0;
}
