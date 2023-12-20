// greatest no usinf if else//
#include <stdio.h>
int main()
{
        int a, b, c;
        printf("enter the  a");
        printf("enter the  b");
        printf("enter the  c");
        scanf("%d", &a);
        scanf("%d", &b);
        scanf("%d", &c);
        if (a > b)
        {
                if (a < c)
                {
                        printf("a is max");
                }
                else
                {
                        printf("c is max");
                }
        }
        if (a < b)
        {
                if (b < c)
                {
                        printf("c is max");
                }
                else
                {
                        printf("b is max");
                }
        }
        return 0;
}
