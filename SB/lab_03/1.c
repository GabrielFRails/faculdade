#include <stdio.h>

char process(char x) {
  return ~x + 1;
}

int main() {
   printf("%d\n", process(1));
   printf("%d\n", process(200));
   return 0;
}