#include<stdio.h>
int main(){
	printf("Nhap vao ngay thang nam: "); 
    try:
        datetime(ngay, thang, nam)
        return True
    except ValueError:
        return False

day = int(input("Nh?p v�o ng�y: "))
month = int(input("Nh?p v�o th�ng: "))
year = int(input("Nh?p v�o n�m: "))

if is_valid_date(day, month, year):
    print("Ng�y th�ng n�m b?n v?a nh?p l� h?p l?.")
else:
    print("Ng�y th�ng n�m b?n v?a nh?p kh�ng h?p l?.")
} 
