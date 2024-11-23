#include<stdio.h>
int main(){
	int year;
	printf("Moi ban nhap vao nam ");
	scanf("%d",&year);
	
	if(year%400==0 || year%4==0){
		printf("Nam %d la nam nhuan ", year);
	}else if(year%100==0){
		printf("Nam %d khong phai la nam nhuan ", year); 
	}else{
		printf("Nam %d khong phai la nam nhuan", year); 
	} 
	return 0; 
	
}
