#include <stdio.h>
int main(void)
{
int choice;
double A;
double B;
double result;
do
{
printf("Simple Calculator\n");
printf("1) Add\n");
printf("2) Subtract\n");
printf("3) Multiply\n");
printf("4) Divide\n");
printf("0) Quit\n");

printf("Choice: ");
scanf("%d", &choice);
if (choice == 0)
{
    printf("Bye!\n");
}
else if (choice < 0 || choice > 4)
{
    printf("Invalid choice\n");
}
else if (choice == 1)
{
    printf("A: ");
    scanf("%lf", &A);
    printf("B: ");
    scanf("%lf", &B);
    result = A + B;
    printf("Result: %g\n\n", result);
}
else if (choice == 2)
{
    printf("A: ");
    scanf("%lf", &A);
    printf("B: ");
    scanf("%lf" , &B);
    result = A - B;
    printf("Result: %g\n\n", result);
}
else if (choice == 3)
{
printf("A: ");
    scanf("%lf", &A);
    printf("B: ");
    scanf("%lf" , &B);
    result = A * B;
    printf("Result: %g\n\n", result);
}
else if (choice == 4)
{
    printf("A: ");
    scanf("%lf", &A);
    printf("B: ");
    scanf("%lf", &B);
    if (B == 0)
    {
        printf("Error: division by zero\n\n");
    }
    else
    {
        result = A / B;
        printf("Result: %g\n\n", result);
    }
}
}
while (choice != 0);
return (0);
}
