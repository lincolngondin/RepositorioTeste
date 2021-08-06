#ifndef _OPERATIONS_H_
#define _OPERATIONS_H_

int soma(int,...);
int sub(int,...);

template<typename T1, typename T2>
auto mult(T1 a, T2 b) -> decltype(a*b){
	return a*b;
}

#endif