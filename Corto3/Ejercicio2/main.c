/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   
float fahren, celcius;
printf("Ingrese la temperatura en °Fahrenheit: ");
scanf("%f", &fahren);
celcius = (fahren-32)*5/9;
printf ("El valor de %f en celcius es %f\n", fahren, celcius);
return 0;
}

