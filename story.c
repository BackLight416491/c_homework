#include <stdio.h>
#define ARR_LEN 10

int main(void){
	printf("hello world!");
	int a = 0;
	int b = a + 3;
	float c += a + b;
	printf("%f",c);
	return 0;
}

float test(void){
	int a[ARR_LEN];
	float b = 0;
	for(int i=0; i<ARR_LEN; i++){
		if(a[i] >= 0){
			b += a;
		}
	}
	return b;
}
