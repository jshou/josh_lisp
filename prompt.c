#include <stdio.h>
#include <stdlib.h>

#include <readline/readline.h>
#include <readline/history.h>

int main(int argc, char** argv) {
  while (1) {
    char* input = readline("josh_lisp> ");
    add_history(input);

    if (!input)
      break;

    printf("no, you're a %s\n", input);

    free(input);
  }
  return 0;
}
