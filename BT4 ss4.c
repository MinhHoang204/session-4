#include <stdio.h>
int main(){
	from calendar import monthrange

def days_in_month(year, month):
    _, num_days = monthrange(year, month)
    return num_days

year = int(input("Nh?p v�o n�m: "))
month = int(input("Nh?p v�o th�ng: "))
print("S? ng�y trong th�ng l�:", days_in_month(year, month))
} 


