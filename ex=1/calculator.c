#include <stdio.h>
#define p printf
#define s scanf

om()
{

    printf("\n1.press 1 for addition\n");
    printf("2.press 2 for substraction\n");
    printf("3.press 3 for multiplication\n");
    printf("4.press 4 for division\n");
    printf("5.press 5 for modulos\n");
    printf("6.press 6 for exit program");
}

void addition(int a, int b)
{
    p("%d + %d = %d", a, b, a + b);
}
void substraction(int a, int b)
{
    p("%d - %d = %d", a, b, a - b);
}
void multiplication(int a, int b)
{
    p("%d * %d = %d", a, b, a * b);
}
void division(int a, int b)
{
    p("%d / %d = %d", a, b, a / b);
}
void modulos(int a, int b)
{
    p("%d %% %d = %d", a, b, a % b);
}

int main()
{

    int a, b, choice;
    printf("enter any number: ");
    scanf("%d", &a);
    printf("enter any number: ");
    scanf("%d", &b);

jump:
    om();
    scanf("%d", &choice);

    switch (choice)
    {

    case 1:
        addition(a, b);
        goto jump;
    case 2:
        substraction(a, b);
        goto jump;
    case 3:
        multiplication(a, b);
        goto jump;
    case 4:
        division(a, b);
        goto jump;
    case 5:
        modulos(a, b);
        goto jump;
    case 6:
        p("you are exited");
        break;

    default:
        printf("unknown number!!");
        goto jump;
    }
    return 0;
}
    
    