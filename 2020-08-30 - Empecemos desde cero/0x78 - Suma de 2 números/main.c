#include <stdio.h>

int main() {

  // Hace 50 años...
  // int -> 16 bits
  // long int -> 32 bits
  // long long -> 64 bits

  // Hoy, casi siempre...
  // int -> 32 bits
  // long -> 64 bits
  // long long -> 64 bits

  long int a, b;
  scanf("%ld %ld", &a, &b);
  printf("%ld\n", a + b);
  return 0;
}