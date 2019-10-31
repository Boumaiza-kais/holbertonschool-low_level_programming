#include <stdio.h>

/**
 * Justbeforemainfunction - function to run command before main function
 * Return: always successful
 */
void Justbeforemainfunction(void) __attribute__ ((constructor));

void Justbeforemainfunction(void)
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}
