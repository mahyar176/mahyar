#include "grader.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
int sum(int n, ...) {
	va_list x;
	int sum=0,i;
	va_start(x,n);
	for(i=0;i<n;i++){sum+=va_arg(x, int);}
	va_end(x);
	return sum;	
}
