#include<stdio.h>
int main(){
	int number;
	printf("Moi ban nhap vao so nguyen ");
	scanf("%d",&number);
	
	if(number>0){
		printf("Day la so duong");
	}else if(number<0){
		printf("Day la so am ");
	}else{
		printf("So khong chan cung khong le");
	}
	return 0;
}
