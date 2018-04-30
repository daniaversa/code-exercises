#include <stdio.h>
#include <cs50.h>

int main(void)
{
  //Prompt and validate change
  int change;
  do
  {
    change = get_float("Enter the change to give: ");
  }
  while (change < 0 || change >= 100);
  int cents = change * 100;
  //Use the highest coin available and keep track
  int coins = 0;
  while (cents >= 25)
  {
      cents -= 25;
      coins++;
  }
  while (cents >= 10)
  {
      cents -= 10;
      coins++;
  }
  while (cents >= 5)
  {
      cents -= 5;
      coins++;
  }
  while (cents >= 1)
  {
      cents -= 1;
      coins++;
  }
  //Return the final number of coins
  printf("You must use only %i coins.\n", coins);
}
