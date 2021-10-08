// TERNARY OPERATOR
#include <stdio.h>
int main()
{
    int num1, num2, num3, larger, largest;
    printf("Enter the first number : ");
    scanf("%d", &num1);
    printf("Enter the second number : ");
    scanf("%d", &num2);
    larger = (num1>num2) ? num1 : num2;
    printf("The larger of the two number is : %d\n", larger);
    printf("Enter the third number : ");
    scanf("%d", &num3);
    largest = (larger>num3) ? larger : num3;
    printf("The largest of the three numbers is : %d\n", largest);
    return 0;
}