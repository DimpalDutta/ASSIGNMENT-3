#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

char p_array[INT_MAX] = {0};


void Eratos(int n) {

  for(int i = 2; i*i<=n; i++) {
    if(p_array[i] == 0) {
      for(int j = 2; j*i<=n; j++)
        p_array[i*j] = 1;
    }
  }

}

void primes(int n) {
  for(int i = 2; i<=n; i++) {
    if(p_array[i] == 0)
      printf("%d ", i);
  }
  printf("\n");
}

int main() {

  int n;
  printf("Enter the number n:\n");
  scanf("%d", &n);

   Eratos(n);
   primes(n);

  return 0;
}
