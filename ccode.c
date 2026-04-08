#include <stdio.h>

int main ()
{
    int triangularNumber;
    int q, n;

    while (1) 
    {
        printf("input a number: ");
        scanf("%d", &q);

        if (q == -1) {
            printf("\n");
            break;
        }

        printf("\n----------\n");
        triangularNumber = 0;

        for (n = 1; n <= q; n = n + 1)
        {
            triangularNumber += n;
            printf("%3d    %d\n", n, triangularNumber);
        }  
        
    } 

    return 0; 
} 