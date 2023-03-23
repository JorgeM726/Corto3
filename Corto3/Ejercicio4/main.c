/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include "add.h"
int
main ()
{
  int a,b,c;
  float p;
  printf("Ingrese 2 números separados por un espacio: ");
    scanf("%d %d", &a, &b);
  
  
  c = add(a, b);
    printf("a + b = %d\n", c);

    // perform subtraction
    c = subtract(a, b);
    printf("a - b = %d\n", c);

    // perform multiplication
    c = multiply(a, b);
    printf("a * b = %d\n", c);

    // perform division
    c = divide(a, b);
    printf("a / b = %d\n", c);

    p = pi();
    printf("pi= %f\n", p); 
  return 0;
}
