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
  printf("\nTesting Function: isGameOver\n\n");

  struct gameState G, testG;
  int k[10] = {adventurer, gardens, embargo, village, minion, mine, cutpurse,
           sea_hag, tribute, smithy};
  int result;

  //Initialize the game board for two players
  initializeGame(2, k, 3, &G);

  //Copy the game state for the test case
  memcpy(&testG, &G, sizeof(struct gameState));

  //Test 1
  printf("Test 1 - Game Ends With Zero Provinces\n");
  testG.supplyCount[province] = 0;

  result = isGameOver(&testG);

  //Print Results
  printf("Expected Result: 1\n");
  printf("Actual Result: %i\n", result);
  if(result == 1)
    printf("TEST SUCCESSFUL\n\n");
  else
    printf("TEST FAILED\n\n");

  //Test 2
  printf("Test 2 - Game Ends With Zero SUpply\n");  

  //Initialize the game board for two players
  initializeGame(2, k, 3, &G);

  //Copy the game state for the test case
  memcpy(&testG, &G, sizeof(struct gameState));

  //Set supplies to zero
  testG.supplyCount[estate] = 0;
  testG.supplyCount[duchy] = 0;
  testG.supplyCount[silver] = 0;

  result = isGameOver(&testG);

  //Print results
  printf("Expected Result: 1\n");
  printf("Actual Result: %i\n", result);
  if(result == 1)
    printf("TEST SUCCESSFUL\n\n");
  else
    printf("TEST FAILED\n\n");
}