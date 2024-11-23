#include<stdio.h>
int main(){
	int a, b, c;
	
	printf("Moi ban nhap vao canh thu nhat ");
	scanf("%d",&a);
	printf("Moi ban nhap vao canh thu hai ");
	scanf("%d",&b);
	printf("Moi ban nhap vao canh thu ba ");
	scanf("%d",&c);
	
	if (b<=a+c){
		printf("Là ba canh cua tam giac "); 
	}else{
		printf("Khong phai ba canh cua tam giac"); 
	}
	return 0; 
	 
} 
