#include<stdio.h>
int main(){
	int a,b,c;
	printf("Nhap so a: ");
	scanf("%d", &a);
	printf("Nhap so b: ");
	scanf("%d", &b);
	printf("Nhap so c: ");
	scanf("%d", &c);
	if(a>b&&b>c){
	}else if(a>b&&b>c){
		printf("So lon nhat la a: ");
		scanf("%d", &a);
		printf("So nho nhat la c: ");
		scanf("%d", &c);
		printf("So con lai la b: ");
		scanf("%d", &b);
	}
	if (c>a&&a>b){
	}else if(c>a&&a>b){
		printf("So lon nhat la c: ");
		scanf("%d",&c);
		printf("So nho nhat la b: ");
		scanf("%d",&b);
		printf("So con lai la a: ");
		scanf("%d", &a);
	} 
	if (b>a&&a>c){
	}else if(b>a&&a>c){
		printf("So lon nhat la b: ");
		scanf("%d", &b);
		printf("So nho nhat la c: ");
		scanf("%d", &c);
		printf("So con lai la a: ");
		scanf("%d", &a);
	}
	if (a>c&&c>b){
	}else if(a>c&&c>b){
		printf("So lon nhat la a: ");
		scanf("%d", &a);
		printf("So nho nhat la b: ");
		scanf("%d", &b);
		printf("So con lai la c: ");
		scanf("%d", &c);
	}
		
	
		
