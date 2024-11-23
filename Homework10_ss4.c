#include<stdio.h>
int main(){
	int a, b, c;
	printf("Moi ban nhap vao so thu nhat ");
	scanf("%d",&a);
	printf("Moi ban nhap vao so thu 2 ");
	scanf("%d",&b);
	printf("Moi ban nhap vao so thu 3 "); 
	scanf("%d",&c);
	 
	 
	if(a<b && b<c){
		printf("\n\t%d %d %d ",a, b, c);
	}else if ( a<c &&c<b){
		printf("\n\t%d %d %d ",a, c ,b);
	}else if (b<a && a<c){
		printf("\n\t%d %d %d ",b, a, c );
	}else if (b<c && c<a){
		printf("\n\t%d %d %d ", b, c ,a);
	}else if (c<a && a<b){
		printf("\n\t%d %d %d ",c, a, b);
	}else{
		printf("\n\t%d %d %d ", c, b, a);
		
	}
	return 0;
	
} 
