#include <unistd.h> 
 
/** 
 * _putchar - Writting character c to stdout 
 * @c: Character print 
 * 
 * Return: Success 1. 
 * On error, -1 is returned, and error is set.
 */ 
int _putchar(char c) 
{ 
 return (write(1, &c, 1)); 
} 

