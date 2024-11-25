#include<stdio.h>
int main(){
	int num;
	printf("Moi ban nhap vao so nguyen ");
	scanf("%d",&num);
	
	if(num%3==0 && num%5==0 ){
		printf("So nguyen chia het cho ca 3 va 5 ");
	}else{
		if(num%3==0){
			printf("So chia het cho 3 va khong chia het cho 5 ");
		}else if(num%5==0){
			printf("So chia het cho 5 va khong chia het cho 3 ");
		}else if(num%3!=0 && num%5!=0){
			printf("So khong chia het cho ca hai so");
		}
		}
	return 0;
	}	
