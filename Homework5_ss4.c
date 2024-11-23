#include<stdio.h>
int main(){
	int a, b, c;
	printf("Moi ban nhap vao so thu nhat: ");
	scanf("%d",&a);
	printf("Moi ban nhap vao so thu hai: ");
	scanf("%d",&b);
	printf("Moi ban nhap vao so thu ba: ");
	scanf("%d",&c);
	
	if(a<=c && c<=b){
		printf("So thu ba thuoc khoang giua so thu 2 va so thu nhat");
	}else{
		printf("So thu ba khong thuoc khoang giua so thu 2 va so thu nhat");
	}
	return 0;
	
}
