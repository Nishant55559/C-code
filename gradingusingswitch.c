#include <stdio.h>

int main(){
    float phy,chem,maths,avg;
    int result;
    printf("enter the marks of phy,chem,maths");
    scanf("%f%f%f",&phy,&chem,&maths);
    avg=(phy+chem+maths)/3;

    result=avg/10;
    switch(result)
    {
    case 10:
    case 9: printf("s grade");break;
    case 8: printf("a grade");break;
    case 7: printf("b grade");break;
    case 6: printf("c grade");break;
    case 5: printf("d grade");break;
    case 4 :printf("e grade");break;
    default:printf("fail");
    
    }



    return 0;
}