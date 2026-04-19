#include <stdio.h>

int main()
{
    int r1, c1, r2, c2;
    scanf("%d %d", &r1, &c1);
    scanf("%d %d", &r2, &c2);

    while (c1 != r2)
    {
        printf("\tError....\n\tThis is not possible\n\tTry again...");
        scanf("%d %d", &r1, &c1);
        scanf("%d %d", &r2, &c2);
    }

    int A[r1][c1], B[r2][c2], C[r1][c2];

    // input a matrix

    printf("Enter A matrix: \n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // input b matrix
    printf("Enter B matrix: \n");

    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    return 0;
}