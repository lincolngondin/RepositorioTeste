#include "operations.h"
#include <cstdarg>

int soma(int n, ...){
	va_list args;
	va_start(args, n);
	int t = 0;
	for(int i = 0; i < n; i++)
			t+=va_arg(args, int);
	
	va_end(args);
	return t;
}

int sub(int n, ...){
	va_list args;
	va_start(args, n);
	int t = 0;
	for(int i = 0; i < n; i++)
			t-=va_arg(args, int);
	
	va_end(args);
	return t;
}
