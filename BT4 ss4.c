#include <stdio.h>
int main(){
	from calendar import monthrange

def days_in_month(year, month):
    _, num_days = monthrange(year, month)
    return num_days

year = int(input("Nh?p vào nãm: "))
month = int(input("Nh?p vào tháng: "))
print("S? ngày trong tháng là:", days_in_month(year, month))
} 


