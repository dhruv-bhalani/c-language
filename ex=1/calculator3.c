#include <stdio.h>
#define p printf
#define s scanf



int main()
{
    int a, b, choice;
    jump:
    printf("1.press 1 for addition\n");
    printf("2.press 2 for substraction\n");
    printf("3.press 3 for multiplication\n");
    printf("4.press 4 for division\n");
    printf("5.press 5 for modulos\n");
    printf("6.press 6 for exit program\n\n");
    printf("enter any number: ");
    scanf("%d", &a);
    printf("enter any number: ");
    scanf("%d\n\n", &b);
    
     
    
   
    scanf("%d", &choice);

    switch (choice)
    {

    case 1:
        p("%d+%d=%d\n\n",a,b,a+b);
        goto jump;
    case 2:
        p("%d-%d=%d\n\n",a,b,a-b);
        goto jump;
    case 3:
        p("%d*%d=%d\n\n",a,b,a*b);
        goto jump;
    case 4:
        p("%d/%d=%d\n\n",a,b,a/b);
        goto jump;
    case 5:
        p("%d %% %d=%d\n\n",a,b,a%b);
        goto jump;
    case 6:
        p("ghare ja\n");
        break;

    default:
        printf("unknown number!!\n");
        goto jump;
    }
    return 0;
}
    
    