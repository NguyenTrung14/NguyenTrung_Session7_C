#include<stdio.h>
int main(){
	int number[5]={14,2,22,7,27};
	for(int i=0;i<(sizeof(number)/sizeof(int));i++){
		if(number[i]%2==0){
			number[i] += 3;
		} else{
			number[i] +=2;
		}
	}
	for(int a=0;a<(sizeof(number)/sizeof(int));a++){
		printf("%d   ",number[a]);
	}
	return 0;
}
