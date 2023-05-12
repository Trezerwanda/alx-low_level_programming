#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  // Check if the number of arguments is exactly 2
  if (argc != 2) {
    printf("Error\n");
    return 1;
  }

  // Convert the argument to an integer
  int cents = atoi(argv[1]);

  // If the number is negative, print 0 and return
  if (cents < 0) {
    printf("0\n");
    return 0;
  }

  // Calculate the minimum number of coins required
  int num_coins = 0;
  int coin_values[] = {25, 10, 5, 2, 1};
  int i;
  for (i = 0; i < 5; i++) {
    num_coins += cents / coin_values[i];
    cents %= coin_values[i];
  }

  // Print the result
  printf("%d\n", num_coins);
  return 0;
}

