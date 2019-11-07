#include "holberton.h"
#include <stdio.h>
/**
 * binary_to_uint - function that  convert binary to unsigned int
 * @b: pointer to const char
 * Return: always successful
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int length=0,l=0;
unsigned int i=0,j=0;
unsigned int number=0;
unsigned int c=1;
if (b == NULL)
return (0);
if (b[i] != '0' && b[i] != '1')
{
return (0);
}
for(i=0;b[i] != '\0';i++)
{
length++;
}
l=length;
for(j=0;j<=length;j++)
{
l--;
if(b[j]=='1')
{
for(i=0;i<l;i++)
c=c*2;
number+=c;
}
c=1;
}
return (number);
}
