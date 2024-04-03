#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[3][3];
    for (int i = 1; i < 3; i++)
    {

        for (int j = 1; j < 3; j++)
        {
            printf("enter the number in the %d st row %d th column : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 1; i < 3; i++)
    {
        for (int j = 1; j < 3; j++)
        {
            printf("%d\t\t", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}