#include <stdio.h>

/**
 * print_to_98 - print all natural numbers till 98
 *
 * Description: it adds 1 to n till number is 98
 *
 * @n: integer
 *
 * Return: void
 *
 */

void print_to_98(int n)
{
  if (n < 98)
  {
    for (; n < 99; n++)
    {
     printf("%d", n);
     if (n != 98)
      {
       printf(", ");
      }
    }
		printf("\n");
  }
  else if (n > 98)
  {
    for (; n > 99; n--)
    {
     printf("%d", n);
     if (n != 98)
      {
       printf(", ");
      }
    }
		printf("\n");
  }
  else
    printf("%d\n", 98);
}
