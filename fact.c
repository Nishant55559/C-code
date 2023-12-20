#include <stdio.h>
int main() {
    int n, i;
    unsigned long long fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n%2==0)
     {printf("Error!" );
    }
    else {
        for (i = 1; i <= n; ++i) {
            fact = fact* i;
        }
        printf("Factorial of %d is %lu", n, fact);
    }

    return 0;
}
