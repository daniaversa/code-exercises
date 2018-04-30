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
//Draw Pyramid
for (int i = 0; i < n; i++)
{
    //Add Spaces
    for(int s = 0; s < n - i; s++)
    {
        printf(" ");
    }
    //Add Hashes
    for(int h = 0; h < i + 1; h++)
    {
        printf("#");
    }
    //Add Gap
    printf("  ");
    //Add Hashes
    for(int h = 0; h < i + 1; h++)
    {
        printf("#");
    }
    //Add line break
    printf("\n");
}
}

