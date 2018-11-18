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
  printf("\n\nCard Test 1: Outpost\n\n");

  struct gameState G;
  int k[10] = {adventurer, gardens, embargo, village, minion, mine, cutpurse,
           sea_hag, tribute, smithy};

  //Initialize the game board for two players
  initializeGame(2, k, 3, &G);

  //Initialize handCount and outpost card for player one
  G.handCount[0] = 1;
  G.hand[0][0] = outpost;

  //int outpostTracker = G.outpostPlayed;
  int cardsInHand = G.handCount[0];

  //printf("Outpost state before playing outpost: %i\n", G.outpostPlayed);
  //printf("Hand count before playing outpost: %i\n", cardsInHand);

  //Play outpost card from player one's hand
  playCard(0, 1, 0, 0, &G);


  //printf("Outpost state after playing outpost: %i\n", G.outpostPlayed);
  //printf("Hand count after playing outpost: %i\n", G.handCount[0]);

  //Test 1
  printf("Test 1: Testing Outpost State\n");
  printf("Expected outpost state: 1\n");
  printf("Actual outpost state: %i\n", G.outpostPlayed);
  if(G.outpostPlayed == 1)
    printf("TEST SUCCESSFUL\n\n");
  else
    printf("TEST FAILED\n\n");

  //Test 2
  printf("Test 2: Testing Hand Count\n");
  printf("Expected hand count: %i\n", cardsInHand - 1);
  printf("Actual hand count %i\n", G.handCount[0]);
  if(G.handCount[0] == cardsInHand - 1)
    printf("TEST SUCCESSFUL\n\n");
  else
    printf("TEST FAILED\n\n");

  //Assert statements
  //assert(G.outpostPlayed == 1);
  //assert(G.handCount[0] == cardsInHand - 1);

  printf("Card Test 1: Complete\n\n");
}