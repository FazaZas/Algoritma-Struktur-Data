#include <stdio.h>
int Fibonaci(int N);
void main()
{
     int i, N;
     printf("Masukkan batas akhir dari bilangan fibonaci : ");
     scanf("%d", &N);
     for (i = 0; i <= N; i++)
          printf("%d, ", Fibonaci(i));
}
int Fibonaci(int N)
{
     if (N < 2)
          return (N);
     else
          return (Fibonaci(N - 2) + Fibonaci(N - 1));
}