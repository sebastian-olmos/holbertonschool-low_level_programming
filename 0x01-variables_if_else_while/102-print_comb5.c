#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
 int a;
 int b;
 int c;
 int d;
 for (a = '0'; a < '9'; a++)
   {
     for (b = '0'; b < '8'; b++)
       {
	 for (c = '0'; c < '9'; c++)
	   {
	     for (d = '1'; d < '9'; d++)
	       {
		 putchar(a);
		 putchar(b);
		 putchar(' ');
		 putchar(c);
		 putchar(d);
		 if (d < '9' || c < '9' || b < '8' || a < '9')
		   {
		     putchar(',');
		     putchar(' ');
		   }
	       }
	   }
       }
   }
 putchar('\n');
 return (0);
}

