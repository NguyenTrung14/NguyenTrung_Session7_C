#include<stdio.h>
int main(){
	int i;
	printf("Moi ban nhap so phan tu cua mang : ");
	scanf("%d", &i);
	int number[i];
	for(int a=0;a<i;a++){
		printf("\nMoi ban nhap phan tu %d cua mang : ",a+1);
		scanf("%d", &number[a]);
	}
	for(int b=0;b<i;b++){
		printf("%d  ",number[b]);
	}
	return 0;
}
