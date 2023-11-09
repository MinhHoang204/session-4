#include<stdio.h>
int main(){
	printf("Nhap vao ngay thang nam: "); 
    try:
        datetime(ngay, thang, nam)
        return True
    except ValueError:
        return False

day = int(input("Nh?p vào ngày: "))
month = int(input("Nh?p vào tháng: "))
year = int(input("Nh?p vào nãm: "))

if is_valid_date(day, month, year):
    print("Ngày tháng nãm b?n v?a nh?p là h?p l?.")
else:
    print("Ngày tháng nãm b?n v?a nh?p không h?p l?.")
} 
