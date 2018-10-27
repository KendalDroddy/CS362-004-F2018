#include <assert.h>
#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


#define NUM_PLAYERS 2

int main()
{
  printf("\nTesting Function: Compare\n\n");

  const int a = 1;
  const int b = 2;
  const int c = 3;

  const int *intPtrA = &a;
  const int *intPtrB = &b;
  const int *intPtrC = &c;

  printf("Test 1\n");

  int result = compare(intPtrA, intPtrB);

  //Display results of test 1
  printf("Expected Result: -1\n");
  printf("Actual Result: %i\n", result);
  if(result == -1)
    printf("TEST SUCCESSFUL\n\n");
  else
    printf("TEST FAILED\n\n");

  printf("TEST 2\n");
  result = compare(intPtrC, intPtrB);

  //Display results of test 2
  printf("Expected Result: 1\n");
  printf("Actual Result: %i\n", result);
  if(result == 1)
    printf("TEST SUCCESSFUL\n\n");
  else
    printf("TEST FAILED\n\n");

  printf("Testing Function: Compare Completed\n\n");

}