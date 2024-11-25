#include<stdio.h>
int main(){
	int e_num;
	const float cost = 10.000 ;
	
	printf("Moi quy khach nhap vao so dien ");
	scanf("%d",&e_num);
	
	if(0<=e_num && e_num<50){
		printf("So tien quy khach phai tra la: %.3f VND", e_num*cost);
	}else if(e_num<100){
		printf("So tien quy khack phai tra la: %.3f VND",e_num*(cost+5.000));
	}else if(e_num<150){
		printf("So tien quy khach phai tra la: %.3f VND",e_num*(cost+10.000));
	}else if(e_num<200){
		printf("So tien quy khach phai tra la: %.3f VND",e_num*(cost+15.000));
	}else{
		printf("So tien quy khach phai tra la: %.3f VND",e_num*(cost+20.000));
	}
	return 0;
}
