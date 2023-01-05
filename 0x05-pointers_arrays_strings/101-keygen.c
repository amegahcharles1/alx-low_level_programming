#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

int main(void) {
  // Seed the random number generator with the current time
  srand(time(NULL));

  // Generate a random password
  char password[PASSWORD_LENGTH + 1];
  for (int i = 0; i < PASSWORD_LENGTH; i++) {
    // Generate a random character between 'A' and 'Z'
    password[i] = 'A' + (rand() % ('Z' - 'A' + 1));
  }
  password[PASSWORD_LENGTH] = '\0'; // Terminate the string

  // Print the password
  printf("Random password: %s\n", password);

  return 0;
}

