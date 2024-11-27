#include<stdio.h>
int main(){
	int a, b;
	printf("Moi ban nhap so hang : ");
	scanf("%d", &a);
	printf("Moi ban nhap so cot : ");
	scanf("%d", &b);
	int number[a][b];
	int i,j;
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("Moi ban nhap gia tri number[%d][%d] : ",i,j);
			scanf("%d", &number[i][j]);
		}
	}
	printf("Cac phan tu nam o bien cua ma tran la : \n");
	for(j=0;j<b;j++){
		printf("%d\n",number[0][j]);
	}
	for(i=0;i<a;i++){
		printf("%d\n",number[i][0]);
	}
	if(a>0){
		for(j=0;j<b;j++){
			i=a-1;
			printf("%d\n",number[i][j]);
		}
	}
	if(b>0){
		for(i=0;i<a;i++){
			j=b-1;
			printf("%d\n",number[i][j]);
		}
	}
	return 0;
}
