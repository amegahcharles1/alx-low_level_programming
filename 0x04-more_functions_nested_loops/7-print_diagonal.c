#include <stdio.h>

void print_diagonal(int n) {
  // Print a newline if n is 0 or less
  if (n <= 0) {
    _putchar('\n');
    return;
  }

  // Print spaces before the first \
  for (int i = 0; i < n; i++) {
    _putchar(' ');
  }

  // Print the first \
  _putchar('\\');

  // Print a newline after the last \
  _putchar('\n');
}

