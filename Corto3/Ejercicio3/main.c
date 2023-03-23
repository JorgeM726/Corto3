/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int n, i, primero = 0, segundo = 1, siguiente;

   printf("Ingrese el número de datos para la secuencia de Fibonacci: ");
   scanf("%d", &n);

   printf("Serie Fibonacci: ");

   for (i = 1; i <= n; i++)
   {
      printf("%d ", primero);

      siguiente = primero + segundo;
      primero = segundo;
      segundo = siguiente;
   }

   return 0;
}
