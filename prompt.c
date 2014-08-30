#include <stdio.h>
#include <stdlib.h>

static char input[2048];

int main(int argc, char** argv) {
  while (1) {
    fputs("josh_lisp >", stdout);

    fgets(input, 2048, stdin);

    printf("no, you're a %s\n", input);
  }
  return 0;
}
