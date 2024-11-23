#include<stdio.h>
int main(){
	int day, month, year;
	printf("Moi ban nhap ngay ");
	scanf("%d", &day);
	printf("Moi ban nhap thang ");
	scanf("%d",&month);
	printf("Moi ban nhap nam ");
	scanf("%d",&year);
	
	 if(year%400==0 || year%4==0){ /*Nam nhuan*/
		if(day>0&&day<=31   && month>=1&&month<=12&&month!=2   &&year>1000){
			printf("Ngay %d thang %d nam %d , hop le ",day, month, year);
		}else if(day>0&&day<=29  && month==2   && year>1000){
			printf("Ngay %d thang %d nam %d , hop le ", day, month, year);
		}
		
		
	}else if(year%100==0){  /*Khong phai nam nhuan*/
			if(day>0&&day<=31   && month>=1&&month<=12&&month!=2   &&year>1000){
			printf("Ngay %d thang %d nam %d , hop le ",day, month, year);
			}else if(day>0&&day<=28  && month==2   && year>1000){
			printf("Ngay %d thang %d nam %d , hop le ", day, month, year); 
			
			
			
	}}else if (year){   /*Khong phai nam nhuan*/
		if(day>0&&day<=31   && month>=1&&month<=12&&month!=2   &&year>1000){
			printf("Ngay %d thang %d nam %d , hop le ",day, month, year);
			}else if(day>0&&day<=28  && month==2   && year>1000){
			printf("Ngay %d thang %d nam %d , hop le ", day, month, year); 
			}else{
			printf("Ngay %d thang %d nam %d , khong hop le ", day, month, year);
		}
	
	}	
	return 0;
}

	

