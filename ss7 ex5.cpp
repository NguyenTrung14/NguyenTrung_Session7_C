#include<stdio.h>
int main(){
	int number[5] = {14,2,22,7,27};
	int a=number[0], b=number[0];
	for(int i=0;i<5;i++){
		if(a<number[i]){
			a=number[i];
		}
		if(b>number[i]){
			b=number[i];
		}
		}
	printf("Phan tu lon nhat la : %d \nPhan tu nho nhat la : %d",a ,b);
	return 0;
}
