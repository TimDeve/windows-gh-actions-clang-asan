#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
  char* s = strdup("World!");

  free(s); // Oops

  printf("Hello %s\n", s);

  return 0;
}
