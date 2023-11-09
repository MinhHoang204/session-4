#include <stdio.h>

int main(){
	def tinh_tien_dien(chi_so_cu, chi_so_moi):
    so_dien = chi_so_moi - chi_so_cu
    if so_dien < 50:
        return so_dien * 10000
    elif so_dien < 100:
        return 50 * 10000 + (so_dien - 50) * 15000
    elif so_dien < 150:
        return 50 * 10000 + 50 * 15000 + (so_dien - 100) * 20000
    elif so_dien < 200:
        return 50 * 10000 + 50 * 15000 + 50 * 20000 + (so_dien - 150) * 25000
    else:
        return 50 * 10000 + 50 * 15000 + 50 * 20000 + 50 * 25000 + (so_dien - 200) * 30000

chi_so_cu = 100  # Ví d?: ch? s? c? là 100
chi_so_moi = 250  # Ví d?: ch? s? m?i là 250
tien_dien = tinh_tien_dien(chi_so_cu, chi_so_moi)
print(f"S? ti?n ði?n tiêu th? trong tháng là: {tien_dien} VNÐ")
}
