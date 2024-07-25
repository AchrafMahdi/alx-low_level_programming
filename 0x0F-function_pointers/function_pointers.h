#ifndef _FUNCTIONS_POINTERS_H_
#define _FUNCTIONS_POINTERS_H_

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, long unsigned int size, void (*action)(int));

#endif
