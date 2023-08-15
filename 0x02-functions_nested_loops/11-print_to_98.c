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
    while (n <= 98)
    {
     printf(n);
     n++;
     if (n != 98)
      {
       printf(", ");
       printf("");
      }
    }
  }
  else if (n > 98)
  {
    while (n <= 98)
    {
     printf(n);
     n--;
     if (n != 98)
      {
       printf(", ");
       printf("");
      }
    }
  }
  else
    printf(98);
}

int main(void)
{
  print_to_98(0);
  return (0);
}
