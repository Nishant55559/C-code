#include <stdio.h>

int main(){
    int phy, chem, bio, result;
    float avg;
    printf("Enter marks of phy, chem and bio: ");
    scanf("%d%d%d", &phy, &chem, &bio);
    avg = (phy+chem+bio)/3.0;
    
    if (avg>=90)
        printf("S GRADE");
    else if (avg>=80 && avg<90)
        printf("A GRADE");
    else if (avg>=70 && avg<80)
        printf("B GRADE");
    else if (avg>=60 && avg<70)
        printf("C GRADE");
    else if (avg>=50 & avg<60)
        printf("D GRADE");
    else if (avg>=40 && avg<50)
        printf("E GRADE");
    else if (avg<40)
        printf("PADHLE MOTORCOD");
    
    return 0;
}