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
  printf("\n\nCard Test 3: Smithy\n\n");

  struct gameState G;
  int k[10] = {adventurer, gardens, embargo, village, minion, mine, cutpurse,
           sea_hag, tribute, smithy};

  //Initialize the game board for two players
  initializeGame(2, k, 3, &G);

  //Initialize handCount and smithy card for player one
  G.handCount[0] = 1;
  G.hand[0][0] = smithy;

  int cardsInHand = G.handCount[0];

  printf("Hand count before playing outpost: %i\n", cardsInHand);

  //Play smithy card from player one's hand
  playCard(0, 1, 0, 0, &G);

  printf("Hand count after playing outpost: %i\n", G.handCount[0]);

  //Assert statements
  assert(G.handCount[0] == cardsInHand + 2);

  printf("\n\nCard Test 2: Successful\n\n");
}