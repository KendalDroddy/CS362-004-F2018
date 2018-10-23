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
  printf("\n\nCard Test 2: Village\n\n");

  struct gameState G;
  int k[10] = {adventurer, gardens, embargo, village, minion, mine, cutpurse,
           sea_hag, tribute, smithy};

  //Initialize the game board for two players
  initializeGame(2, k, 3, &G);

  //Initialize handCount and outpost card for player one
  G.handCount[0] = 1;
  G.hand[0][0] = village;

  //int outpostTracker = G.outpostPlayed;
  int cardsInHand = G.handCount[0];
  int actions = G.numActions;

  printf("Number of actions before playing village: %i\n", actions);
  printf("Hand count before playing outpost: %i\n", cardsInHand);

  //Play outpost card from player one's hand
  playCard(0, 1, 0, 0, &G);


  printf("Number of actions after playing village: %i\n", G.numActions);
  printf("Hand count after playing outpost: %i\n", G.handCount[0]);

  //Assert statements
  assert(G.numActions == actions + 1);
  assert(G.handCount[0] == cardsInHand);

  printf("\n\nCard Test 2: Successful\n\n");
}