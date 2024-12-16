#include <stdio.h>

int fact(int n) {
  if (n == 0 || n == 1) {
    return 1;
  } else {
    return (n * fact(n - 1));
  }
}

int main() {
  int n, r;
  printf("\nenter n: ");
  scanf("%d", & n);
  printf("\nenter r: ");
  scanf("%d", & r);
  printf("ncr = %d", ((fact(n) )/(fact(n - r)*fact(r))));
  return 0;
}
