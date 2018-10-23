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
  printf("\n\nCard Test 4: Adventurer\n\n");

  struct gameState G;
  int k[10] = {adventurer, gardens, embargo, village, minion, mine, cutpurse,
           sea_hag, tribute, smithy};

  //Initialize the game board for two players
  initializeGame(2, k, 3, &G);

  //Initialize handCount and adventurer card for player one
  G.handCount[0] = 1;
  G.hand[0][0] = adventurer;

  assert(G.hand[0][0] == 7);

  int cardsInHand = G.handCount[0];

  printf("Hand count before playing adventurer: %i\n", cardsInHand);

  //Play adventurer card from player one's hand
  playCard(0, 1, 0, 0, &G);

  printf("Hand count after playing adventurer: %i\n", G.handCount[0]);
  printf("Card One: %i\n", G.hand[0][2]);

  //Assert statements
  assert(G.handCount[0] == cardsInHand + 2);

  //Ensures the two drawn cards are treasures (copper, silver, or gold)
  assert(G.hand[0][1] == 4 || G.hand[0][1] == 5 || G.hand[0][1] == 6);
  assert(G.hand[0][2] == 4 || G.hand[0][1] == 5 || G.hand[0][1] == 6);

  printf("\n\nCard Test 4: Successful\n\n");
}