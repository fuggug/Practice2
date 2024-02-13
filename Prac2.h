#pragma once

typedef int (*func1)(char, char, char);
typedef void (*func2)(int);
typedef int (*func3)(func2);

int function1(char d, char q, char e);
void function2(int w);
int function3(func2 func);