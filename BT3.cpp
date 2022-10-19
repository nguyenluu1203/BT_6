#include<stdio.h>
int main(){
	float x;
	printf("Moi ban nhap diem: ");
	scanf("%f",&x);
	
	if(x>8.0)
	printf("Loai Gioi");

	else
	if(x<8.0 && x>6.5)

	printf("Loai Kha");
	else
    if(x<6.5 && x>5.0)
	printf("Loai Trung Binh");

	else
	printf("loai Yeu");
}
	
