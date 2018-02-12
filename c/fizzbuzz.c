#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

  if (argc > 4) {
    printf("Too many arguments.\n");
    return 0;
  } else if (argc < 4) {
    printf("There are some arguments missing\n");
    return 0;
  }

  int fizz = strtol(argv[1], NULL, 10);
  int buzz = strtol(argv[2], NULL, 10);
  int max  = strtol(argv[3], NULL, 10);

  if (fizz <= 0 || buzz <= 0 || max <= 0) {
    printf("All arguments must be positive integers\n");
    return 0;
  }

  for (size_t i = 1; i < max; i++) {
    if (i % fizz == 0) {
      printf("Fizz\n");
    } else if (i % buzz == 0) {
      printf("Buzz\n");
    } else {
      printf("%ld\n", i);
    }
  }

  return 0;
}
