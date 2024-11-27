#include<stdio.h>
int main(){
	int number[5];
	int i;
	for(i=0;i<5;i++){
		printf("Moi ban nhap so : ");
		scanf("%d", &number[i]);
	}
	for(i=0;i<5;i++){
		printf("%d   ",number[i]);
	}
	return 0;
}
