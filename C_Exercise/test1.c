#include <stdio.h>

#define uint unsigned int
#define uchar unsigned char

int main(void){
	uchar i;
	uint j,k=5;
	while(1){
		for(i=0;i<5;i++){
			printf("%d\n",i);
			j++;
			k--;
			printf("The j*k = %d",j*k);
		}
	}
}