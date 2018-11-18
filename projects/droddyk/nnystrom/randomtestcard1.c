#include <assert.h>
#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


#define NUM_PLAYERS 2

int main()
{
  printf("\n\nCard Test 2: Village\n\n");

  struct gameState G, testG;
  int k[10] = {adventurer, gardens, embargo, village, minion, mine, cutpurse,
           sea_hag, tribute, smithy};

  //Initialize the game board for two players
  initializeGame(2, k, 3, &G);

for(int i =  0; i < 10; i++)
{
  //Copy game to test state
  memcpy(&testG, &G, sizeof(struct gameState));

  //Initialize handCount and outpost card for player one
  G.handCount[0] = 1;
  G.hand[0][0] = village;

  //int outpostTracker = G.outpostPlayed;
  int cardsInHand = G.handCount[0];
  int actions = G.numActions;

  //printf("Number of actions before playing village: %i\n", actions);
  //printf("Hand count before playing outpost: %i\n", cardsInHand);

  //Play outpost card from player one's hand
  playCard(0, 1, 0, 0, &G);

  //Test 1
  printf("Test 1: Testing Number of Actions\n");
  printf("Expected Number of Actions: %i\n", actions + 1);
  printf("Actual Number of Actions: %i\n", G.numActions);
  if(G.numActions == actions + 1)
    printf("TEST SUCCESSFUL\n\n");
  else
    printf("TEST FAILED\n\n");

  //Test 2
  printf("Test 2: Testing Hand Count\n");
  printf("Expected Hand Count: %i\n", cardsInHand);
  printf("Actual Hand Count: %i\n", G.handCount[0]);
  if(cardsInHand == G.handCount[0])
    printf("TEST SUCCESSFUL\n\n");
  else
    printf("TEST FAILED\n\n");
}
  printf("\n\nCard Test 2: Complete\n\n");
}