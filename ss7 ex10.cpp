#include<stdio.h>
int main (){
	int a;
	printf("Moi ban nhap so phan tu cua mang : ");
	scanf("%d", &a);
	int number[a], i;
	for(i=0;i<a;i++){
		printf("Moi ban nhap gia tri cho phan tu thu %d trong mang : ",i+1);
		scanf("%d",&number[i]);
	}
	for(i=0;i<a;i++){
		if((number[i]%2!=0 && number[i]%3!=0 && number[i]%5!=0 && number[i]%7!=0) || number[i]==2 || number[i]==3 || number[i]==5 || number[i]==7){
			printf("%d\n",number[i]);
	}
}
	return 0;
}
