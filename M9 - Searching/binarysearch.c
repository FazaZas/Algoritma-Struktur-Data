#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <sys/time.h>
#define MAX 10

int Data[MAX];
void Tukar(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void BubbleSort()
{
    int i, j;
    for (i = 1; i < MAX - 1; i++)
        for (j = MAX - 1; j >= i; j--)
            if (Data[j - 1] > Data[j])
                Tukar(&Data[j - 1], &Data[j]);
}

int BinarySearch(int x)
{
    int L = 0, R = MAX - 1, m;
    bool ketemu = false;
    while ((L <= R) && (!ketemu))
    {
        m = (L + R) / 2;
        if (Data[m] == x)
            ketemu = true;
        else if (x < Data[m])
            R = m - 1;
        else
            L = m + 1;
    }
    if (ketemu)
        return m;
    else
        return -1;
}
void main()
{
    int i;
    srand(0);

    printf("\nDATA : ");
    for (i = 0; i < MAX; i++)
    {
        Data[i] = rand() / 1000 + 1;
        printf("%d ", Data[i]);
    }

    BubbleSort(0, MAX - 1);
    int Kunci;
    printf("\nKunci : ");
    scanf("%d", &Kunci);
    int ketemu = BinarySearch(Kunci);
    if (ketemu > 0)
        printf("Data ditemukan pada posisi %d", ketemu);
    else
        printf("Data tidak ditemukan");

    struct timeval stop, start;
    gettimeofday(&start, NULL);
    // do stuff
    gettimeofday(&stop, NULL);
    printf("\ntook %lu us\n", (stop.tv_sec - start.tv_sec) * 1000000 + stop.tv_usec - start.tv_usec);
    return 0;
}
