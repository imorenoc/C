/* gcc -o scanf scanf.c */
#include <stdio.h>

int main()
{
  int a, b, sum;

  printf("Ingrese el primer entero\n");
  scanf("%d", &a);
  printf("Ingrese el segundo entero\n");
  scanf("%d", &b);
  sum = a + b;
  printf("La suma es %d\n", sum);

  return 0;
}
