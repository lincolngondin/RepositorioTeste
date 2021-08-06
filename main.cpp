#include <iostream>
#include <cstdarg>
#include "operations.h"


int produto(int n, ...){
	va_list arg;
	va_start(arg, n);
	int t = 1;
	for(int i = 0; i< n; i++)
		t*= va_arg(arg, int);
	
	va_end(arg);
	return t;
}


int main(){
	std::cout << mult(4.55, 2); 
	
	return 0;
}