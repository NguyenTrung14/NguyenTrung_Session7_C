#include<stdio.h>
int main(){
	int number[5] = {7,14,1,9,2};
	int a=0;
	for(int i=0;i<5;i++){
		if(number[i]%2==0){
			printf("%d  ",number[i]);
			a=1;
		}
		}
	if(a==0){
		printf("Mang khong chua so chan");
	}
	return 0;
}
