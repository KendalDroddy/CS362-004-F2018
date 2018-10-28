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
  printf("\nTesting Function: getCost\n\n");

  int k [27] = {curse, estate, duchy, province, copper, silver, gold, adventurer, council_room, feast, 
                gardens, mine, remodel, smithy, village, baron, great_hall, minion, steward, tribute, 
                ambassador, cutpurse, embargo, outpost, salvager, sea_hag, treasure_map};

  printf("Testing Expected vs Actual Card Values\n\n");

  //Curse
  printf("Expected Vale: %i Actual Value: %i ", 0, getCost(k[0]));
  if(getCost(k[0]) == 0)
    printf("TEST SUCCESSFUL\n");
  else printf("TEST FAILED\n");

  //Estate
  printf("Expected Vale: %i Actual Value: %i ", 2, getCost(k[1]));
  if(getCost(k[1]) == 2)
    printf("TEST SUCCESSFUL\n");
  else printf("TEST FAILED\n");

  //Duchy
  printf("Expected Vale: %i Actual Value: %i ", 5, getCost(k[2]));
  if(getCost(k[2]) == 5)
    printf("TEST SUCCESSFUL\n");
  else printf("TEST FAILED\n");

  //Province
  printf("Expected Vale: %i Actual Value: %i ", 8, getCost(k[3]));
  if(getCost(k[3]) == 8)
    printf("TEST SUCCESSFUL\n");
  else printf("TEST FAILED\n");

  //Copper
  printf("Expected Vale: %i Actual Value: %i ", 0, getCost(k[4]));
  if(getCost(k[4]) == 0)
    printf("TEST SUCCESSFUL\n");
  else printf("TEST FAILED\n");

  //Silver
  printf("Expected Vale: %i Actual Value: %i ", 3, getCost(k[5]));
  if(getCost(k[5]) == 3)
    printf("TEST SUCCESSFUL\n");
  else printf("TEST FAILED\n");

  //Gold
  printf("Expected Vale: %i Actual Value: %i ", 6, getCost(k[6]));
  if(getCost(k[6]) == 6)
    printf("TEST SUCCESSFUL\n");
  else printf("TEST FAILED\n");

  //Adventurer
  printf("Expected Vale: %i Actual Value: %i ", 6, getCost(k[7]));
  if(getCost(k[7]) == 6)
    printf("TEST SUCCESSFUL\n");
  else printf("TEST FAILED\n");

  //Council Room
  printf("Expected Vale: %i Actual Value: %i ", 5, getCost(k[8]));
  if(getCost(k[8]) == 5)
    printf("TEST SUCCESSFUL\n");
  else printf("TEST FAILED\n");

  //Feast
  printf("Expected Vale: %i Actual Value: %i ", 4, getCost(k[9]));
  if(getCost(k[9]) == 4)
    printf("TEST SUCCESSFUL\n");
  else printf("TEST FAILED\n");

  //Gardens
  printf("Expected Vale: %i Actual Value: %i ", 4, getCost(k[10]));
  if(getCost(k[10]) == 4)
    printf("TEST SUCCESSFUL\n");
  else printf("TEST FAILED\n");

  //Mine
  printf("Expected Vale: %i Actual Value: %i ", 5, getCost(k[11]));
  if(getCost(k[11]) == 5)
    printf("TEST SUCCESSFUL\n");
  else printf("TEST FAILED\n");

  //Remodel
  printf("Expected Vale: %i Actual Value: %i ", 4, getCost(k[12]));
  if(getCost(k[12]) == 4)
    printf("TEST SUCCESSFUL\n");
  else printf("TEST FAILED\n");

  //Smithy
  printf("Expected Vale: %i Actual Value: %i ", 4, getCost(k[13]));
  if(getCost(k[13]) == 4)
    printf("TEST SUCCESSFUL\n");
  else printf("TEST FAILED\n");

  //Village
  printf("Expected Vale: %i Actual Value: %i ", 3, getCost(k[14]));
  if(getCost(k[14]) == 3)
    printf("TEST SUCCESSFUL\n");
  else printf("TEST FAILED\n");

  //Baron
  printf("Expected Vale: %i Actual Value: %i ", 4, getCost(k[15]));
  if(getCost(k[15]) == 4)
    printf("TEST SUCCESSFUL\n");
  else printf("TEST FAILED\n");

  //Great Hall
  printf("Expected Vale: %i Actual Value: %i ", 3, getCost(k[16]));
  if(getCost(k[16]) == 3)
    printf("TEST SUCCESSFUL\n");
  else printf("TEST FAILED\n");

  //Minion
  printf("Expected Vale: %i Actual Value: %i ", 5, getCost(k[17]));
  if(getCost(k[17]) == 5)
    printf("TEST SUCCESSFUL\n");
  else printf("TEST FAILED\n");

  //Steward
  printf("Expected Vale: %i Actual Value: %i ", 3, getCost(k[18]));
  if(getCost(k[18]) == 3)
    printf("TEST SUCCESSFUL\n");
  else printf("TEST FAILED\n");

  //Tribute
  printf("Expected Vale: %i Actual Value: %i ", 5, getCost(k[19]));
  if(getCost(k[19]) == 5)
    printf("TEST SUCCESSFUL\n");
  else printf("TEST FAILED\n");

  //Ambassador
  printf("Expected Vale: %i Actual Value: %i ", 3, getCost(k[20]));
  if(getCost(k[20]) == 3)
    printf("TEST SUCCESSFUL\n");
  else printf("TEST FAILED\n");

  //Cutpurse
  printf("Expected Vale: %i Actual Value: %i ", 4, getCost(k[21]));
  if(getCost(k[21]) == 4)
    printf("TEST SUCCESSFUL\n");
  else printf("TEST FAILED\n");

  //Embargo
  printf("Expected Vale: %i Actual Value: %i ", 2, getCost(k[22]));
  if(getCost(k[22]) == 2)
    printf("TEST SUCCESSFUL\n");
  else printf("TEST FAILED\n");

  //Outpost
  printf("Expected Vale: %i Actual Value: %i ", 5, getCost(k[23]));
  if(getCost(k[23]) == 5)
    printf("TEST SUCCESSFUL\n");
  else printf("TEST FAILED\n");

  //Salvager
  printf("Expected Vale: %i Actual Value: %i ", 4, getCost(k[24]));
  if(getCost(k[24]) == 4)
    printf("TEST SUCCESSFUL\n");
  else printf("TEST FAILED\n");

  //Sea Hag
  printf("Expected Vale: %i Actual Value: %i ", 4, getCost(k[25]));
  if(getCost(k[25]) == 4)
    printf("TEST SUCCESSFUL\n");
  else printf("TEST FAILED\n");

  //Treasure Map
  printf("Expected Vale: %i Actual Value: %i ", 4, getCost(k[26]));
  if(getCost(k[26]) == 4)
    printf("TEST SUCCESSFUL\n");
  else printf("TEST FAILED\n");

  printf("\nTest Complete\n\n");
}