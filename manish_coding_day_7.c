//Manish Athreya
//1BG19CS052
//ayerhtahsinam@gmail.com
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int N, x, y, m, n, a, b;
    printf("Enter the value of N:>>");
    scanf("%d", &N);
    char array[N][N];
    printf("Enter the start coordinates:>>");
    scanf("%d %d", &x, &y);
    printf("Enter the end coordinates:>>");
    scanf("%d %d", &m, &n);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            array[i][j] = '0';
        }
    }
    array[x][y] = 'X';
    array[m][n] = 'X';
    int flag;

    if (x < m)
        a = x + 1;
    else
        a = x - 1;

    for (a; a < (N - 1) && a != 0;)
    {
        array[a][y] = 'X';
        if (a == m)
            break;
        if (m > a)
        {
            a++;
            flag = 1;
        }
        else
        {
            a--;
            flag = 0;
        }
    }
    if (m == 0 || m == N - 1)
    {
        if (flag)
            a--;
        else
            a++;
    }

    for (b = y; b < N;)
    {
        array[a][b] = 'X';
        if (b == n)
        {
            break;
        }
        if (n > b)
            b++;
        else
            b--;
    }
    printf("Solution:\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%c ", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}