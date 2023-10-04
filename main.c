#include <stdio.h>

void generateSpiral(int N, int spiral[N][N]) 
{
    int num = 1;
    int row = N / 2;
    int col = N / 2;

    spiral[row][col] = num++;

    int layer = 1;

    while (layer < N) 
    {
        for (int i = 0; i < layer; i++) 
        {
            
            col++;
            spiral[row][col] = num++;
        }

        for (int i = 0; i < layer; i++) 
        {
            row++;
            spiral[row][col] = num++;
        }

        layer++;

        for (int i = 0; i < layer; i++) {
            
            col--;
            spiral[row][col] = num++;
        }

        for (int i = 0; i < layer; i++) 
        {
            row--;
            spiral[row][col] = num++;
        }

        layer++;
    }

    for (int i = 0; i < N - 1; i++) 
    {
        col++;
        spiral[row][col] = num++;
    }
}

int main() 
{
    int N;

    printf("Enter an odd integer N: ");
    scanf("%d", &N);

    if (N % 2 == 0) 
    {
        printf("N must be an odd integer.\n");
        return 1;
    }

    int spiral[N][N];

    generateSpiral(N, spiral);

    printf("Spiral pattern for N = %d:\n", N);
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++) 
         {
            printf("%2d ", spiral[i][j]);
        }
        printf("\n");
    }

    return 0;
}

