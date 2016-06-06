#include <stdio.h>
#include <stdlib.h>
#include "sq.h"
#include <math.h>

int main()
{
	float a1,b1,c1;
	printf("ax^2+bx+c=0 \n");
	printf("Input a,b,c \n");
	scanf("%f %f %f",&a1,&b1,&c1);
	Roots ret = sq(a1,b1,c1);
	if(ret.num_of_roots == 2){
		printf("x1=%f x2=%f \n",ret.x1,ret.x2);
	}
	else if(ret.num_of_roots == 1)
		printf("x=%f \n",ret.x1);
	else
		printf("Not exist real root\n");
	//fflush(NULL);
	//system ("read -p \"Press any key to continue ...\" -n 1"); 
	return 0;	
}
