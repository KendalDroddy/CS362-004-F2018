#include <assert.h>
#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  printf("\nTesting Function: kingdomCards\n\n");

  int* k;

  k = kingdomCards(1, 2, 3, 4, 5, 6, 7, 8, 9, 10);

  printf("Testing that all ten elements successfully assigned\n");

  for(int i = 0; i < 10; i++)
  {
    printf("Expected Value: %i Actual Value: %i ", i + 1, k[i]);
    if(i + 1 == k[i])
      printf("TEST SUCCESSFUL\n");
    else
      printf("TEST FAILED\n");
  }

  printf("Testing Function: kingdomCards Complete\n\n");
}