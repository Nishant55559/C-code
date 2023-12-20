#include <stdio.h>
void main()
    {
        int height, i, j, k=1, space=0;
        printf("Enter the height: ");
        scanf("%d", &height);
        
        for(i=height; i>=1; i--)
            {
                for (j=0; j<space; j++)
                    printf(" ");
                for (j=1; j<=i; j++)
                    printf("%d", k);
                printf("\n");
                k++; space++;
            }
    }