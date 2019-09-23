#include"holberton.h"
/**
 * Kais Boumaiza
 * Description : alphabet game
 * Return: Always 0.
 */
void print_alphabet_x10(void);
{
  char c = 'a' ;
  int i ;
  for ( i=0 ; i< 10 ; i ++)
 {
  while ( c <= 'z')
    {
    _putchar (c);
     c++ ;
    }
    _putchar ("\n");
 }  
return (0);
}
