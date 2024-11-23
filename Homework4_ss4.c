#include<stdio.h>
int main(){
	int month;
	printf("Moi ban nhap vao 1 thang trong nam: ");
	scanf("%d",&month);
	
	switch(month){
		case 1 :
			printf("Thang %d co 31 ngay ",month);
			break;
	
		case 2:
			printf("Thang %d co 29 ngay ",month);
			break;
		
		case 3 :
			printf("Thang %d co 31 ngay ",month);
			break;
			
		case 4:
			printf("Thang %d co 30 ngay ", month); 
			break;
	
		case 5:
			printf("Thang %d co 31 ngay ", month);
			break;
			
		case 6:
			printf("Thang %d co 30 ngay ", month);
			break;
	
		case 7:
			printf("Thang %d co 31 ngay ", month);
			break;
		
		case 8:
			printf("Thang %d co 31 ngay ", month);
			break;
			
		case 9:
			printf("Thang %d co 30 ngay ", month);
			break;
		
		case 10:
			printf("Thang %d co 31 ngay ", month);
			break;
			
		case 11:
			printf("Thang %d co 30 ngay ", month);
			break;
		
		case 12:
			printf("Thang %d co 31 ngay ", month);
			break;
		
		default:
			printf("Thang khong hop le ");
	}
}

