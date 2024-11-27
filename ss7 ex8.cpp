#include<stdio.h>
int main(){
	int a, b;
	printf("Moi ban nhap so hang : ");
	scanf("%d", &a);
	printf("Moi ban nhap so cot : ");
	scanf("%d", &b);
	int number[a][b];
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			printf("Moi ban nhap gia tri number[%d][%d] : ",i,j);
			scanf("%d", &number[i][j]);
		}
	}
	printf("Bang ban vua nhap la : ");
	for(int c=0;c<a;c++){
		for(int d=0;d<b;d++){
			printf("Gia tri ban vua nhap cho number[%d][%d] la : %d\n",c ,d ,number[c][d]);
		}
	}
	return 0;
}
