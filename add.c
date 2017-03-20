#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main (){
	int firstint,secondint,sum = 0;
	printf("enter two numbers \n");
	scanf("%d %d",&firstint, &secondint);
	sum = firstint + secondint;
	printf("%d + %d = %d \n",firstint,secondint,sum);
	return EXIT_SUCCESS;
}
