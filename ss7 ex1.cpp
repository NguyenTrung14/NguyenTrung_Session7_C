#include<stdio.h>
int main(){
	int a[5] = {12,15,17,19,25};
	for(int i=0;i<5;i++){
		printf("%d\n",a[i]);
	}
	printf("Do dai cua mang la : %d",sizeof(a)/sizeof(int));
	return 0;
}
