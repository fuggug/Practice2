#include "Prac2.h"
#include <stdio.h>

int function1(char d, char q, char e) {
	return d + q + e;
}

void function2(int var) {
	printf("\nFunction2. %d\n", var);
}

int function3(func2 func) {
	func2 Func = function2;
	Func(1421);
	return 2;
}