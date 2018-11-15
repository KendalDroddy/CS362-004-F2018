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
  printf("\n\nCard Test 4: Adventurer\n\n");

  struct gameState G, testG;
  int k[10] = {adventurer, gardens, embargo, village, minion, mine, cutpurse,
           sea_hag, tribute, smithy};

  //Initialize the game board for two players
  initializeGame(2, k, 3, &G);

for(int i =  0; i < 10; i++)
{
  //Copy game to test state
  memcpy(&testG, &G, sizeof(struct gameState));

  //Initialize handCount and adventurer card for player one
  G.handCount[0] = 1;
  G.hand[0][0] = adventurer;

  printf("Test 1: Ensure Adenturer is Chosen\n");
  printf("Expected Value: 7 Actual Value: %i ", G.hand[0][0]);
  if(G.hand[0][0] == 7)
    printf("TEST SUCCESSFUL\n");
  else
    printf("TEST FAILED\n");

  //assert(G.hand[0][0] == 7);

  int cardsInHand = G.handCount[0];

  //printf("Hand count before playing adventurer: %i\n", cardsInHand);

  //Play adventurer card from player one's hand
  playCard(0, 1, 0, 0, &G);

  printf("Test 2: Ensure Proper Hand Count\n");
  printf("Expected Value: %i Actual Value: %i ", cardsInHand + 2, G.handCount[0]);
  if(cardsInHand + 2 == G.handCount[0])
    printf("TEST SUCCESSFUL\n");
  else
    printf("TEST FAILED\n");

  //printf("Hand count after playing adventurer: %i\n", G.handCount[0]);
  //printf("Card One: %i\n", G.hand[0][2]);

  //Assert statements
  //assert(G.handCount[0] == cardsInHand + 2);

  //Ensures the two drawn cards are treasures (copper, silver, or gold)
  printf("Test 3: Ensure First Card is Treasure\n");
  if(G.hand[0][1] == 4 || G.hand[0][1] == 5 || G.hand[0][1] == 6)
    printf("TEST SUCCESSFUL\n");
  else
    printf("TEST FAILED\n");

  printf("Test 4: Ensure Second Card is Treasure\n");
  if(G.hand[0][2] == 4 || G.hand[0][1] == 5 || G.hand[0][1] == 6)
    printf("TEST SUCCESSFUL\n");
  else
    printf("TEST FAILED\n");

  //assert(G.hand[0][1] == 4 || G.hand[0][1] == 5 || G.hand[0][1] == 6);
  //assert(G.hand[0][2] == 4 || G.hand[0][1] == 5 || G.hand[0][1] == 6);
}
  printf("\n\nRandom Test Adventure: Complete\n\n");
}