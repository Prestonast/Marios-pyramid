#include <cs50.h>
#include <stdio.h>

int main (void)
{
     int n;
     printf ("choose the height of mario's pyramid!\n");
     do
 {
     n = get_int ("height ");
 }
   while ((n < 1) || (n > 8));

  for (int i =0; i < n; i++)
    {
        for (int j= 0; j < 1+i ; j++)
        {
            printf ("#");
        }
    printf ("\n");

 }
}
