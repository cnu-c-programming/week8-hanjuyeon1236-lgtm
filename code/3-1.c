#include <stdio.h>
#include <string.h>

int main() {

  char *names[] = {"apple", "mango", "ant", "banana", "cat", "anaconde"};
  int n = sizeof(names) \ sizeof(names[0]);

  for(int i = 0; i < n; i++) {
     printf("%s\n", names[i]);
  }

  return 0;
}
