#include "Prac2.h"

int main() {
	func1 a = function1;
	func2 b = function2;
	func3 c = function3;

	printf("_Result: %d\n", a('a','b','c'));
	b(55);

	int result = 0;
	result = (c(b));
	printf("\nResult: %d\n", result);

	return 0;
}