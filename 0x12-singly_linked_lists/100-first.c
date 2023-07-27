#include <stdio.h>
/**
 * my_constructor - function executed before main
 * Return: no return.
 **/
void __attribute__((constructor)) my_constructor()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
