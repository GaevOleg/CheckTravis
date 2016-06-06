#ifndef SQ_H
#define SQ_H

#include <math.h>
typedef struct
{
	int num_of_roots;
	float x1;
	float x2;
} Roots;

Roots sq(float, float, float);
#endif
