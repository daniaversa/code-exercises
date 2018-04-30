#include <stdio.h>
#include <cs50.h>

int main(void)
{
//Prompt and validate height
int n;
do {
  n = get_int("Height: ");
}
while (n < 0 || n > 23);

//Draw Half Pyramid
for (int i = 0; i < n; i++)
{

  //Add spaces
  for (int s = 1; s < n - i; s++)
  {
  printf(" ");
  }
  //Add hashes
  for (int h = 0; h < i + 2; h++)
  {
  printf("#");
  }
  //Add line break
  printf("\n");
}
}
