#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Tossing a coin...\n");
    int h=0, t=0;
    for(int i=1;i<4;i++)
    {
        int r = rand();
        if(r%2 == 1) 
        {
            printf("Round %d: Heads\n", i); 
            h++;
        }
        else 
        {
            printf("Round %d: Tails\n", i); 
            t++;
        }
    }
    printf("Heads: %d, Tails: %d\n", h, t);
    if(h>t) printf("You won\n");
    else printf("You lost\n");
}