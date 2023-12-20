// switch case for calculator//
#include <stdio.h>
#include<math.h>

int main() {
    float a, b, ans;
    char choice;
    int flag = 0;
    printf("add-[+] \n");
    printf("sub-[-] \n");
    printf("mul-[*] \n");
    printf("enter the choice: ");
    scanf(" %c", &choice);
    printf("Enter the two numbers: ");
    scanf("%f %f", &a, &b);

    switch (choice) {
        case '+':ans = a + b;
            break;
        case '-':
            ans = a - b;
            break;
        case '*':
            ans = a * b;
            break;
        default:
            printf("Invalid choice!\n");
            flag = 1;
            break;
    }
    if (flag == 1) {
        printf("Invalid choice!\n");
    } else {
        printf("ans is %f\n", ans);
    }
    return 0;
}
