#include <stdio.h>
int main()
{
    printf("* Calculator *\n");
    char calculate;
    do
    {
        int num;
        printf("Enter a number: ");
        scanf("%d", &num);

        for (int i = 1; i <= 10; i++)
        {
            printf("%d * %d = %d\n", num, i, num * i);
        }
        printf("\nDo you want to calculate again? (y/n):");
        scanf(" %c", &calculate);
    }

    while (calculate == 'y' || calculate == 'Y');
    printf("Thank you.\n");
}