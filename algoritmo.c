#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int freq=2*3.14156,t=0;
	int x;
	
	for(t=0;t<=100;t++){
		x=sin(freq*t)*1000;
		printf("%d ",x);
	}
	
	printf("\n");
	system("pause");
	
	return 0;
	
}
