#include <stdio.h>
#include "linear.h"
int main()
{
    int a[20] = {1, 2, 4, 5, 3, 6, 7};
    int flag = 0;
    int target = 4;

    linear(target, 7, a);

    return 0;
}