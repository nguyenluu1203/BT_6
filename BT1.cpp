#include<stdio.h>
#include<math.h>
int main(){
	float x;
	float y;
	printf("Moi ban nhap tong doanh so cua thang: ",x);
	scanf("%f",&x);
	scanf("%f",&y);
	
	if((x<=100) && (x>0)){
		y=5/100*x;
		printf("voi tong doanh so la: %f \n",x);
		printf("Ban nhan duoc so hoa hong: %f",y);
	}else{
	if(x<=300){
		y=10/100*x;
		printf("voi tong doanh so la: %f \n",x);
		printf("Ban nhan duoc so hoa hong: %f",y);
	}else{
		y=20/100*y;
		printf("voi tong doanh so la: %f \n",x);
		printf("Ban nhan duoc so hoa hong: %f",y);
	}
	}
}
