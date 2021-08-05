#include <iostream>
#include <cstdarg>



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
	std::cout << produto(4, 2, 3, 4, 6); 
	
	return 0;
}