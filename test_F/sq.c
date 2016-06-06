#include <stdio.h>
#include <stdlib.h>
#include "sq.h"

Roots sq(float a,float b,float c)
{
	float D,x1,x2;
	Roots ret;
	D=pow(b,2)-4*a*c;
	if(D>0)
	{
		x1=(-b+sqrt(D))/(2*a);
		x2=(-b-sqrt(D))/(2*a);
		ret.num_of_roots = 2;		
		ret.x1 = x1;
		ret.x2 = x2;
		return ret;
	}
	else if(D==0)
	{
		x1=-b/(2*a);
		ret.num_of_roots = 1;
		ret.x1 = x1;
		ret.x2 = 0;
		return ret;
	}
	else
		ret.num_of_roots = 0;
		ret.x1 = 0;
		ret.x2 = 0;
		return ret;
}
