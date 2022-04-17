#include <stdio.h>
#include <stdlib.h>
void zero_to_n(int);
main()
{
     int n;
     printf("Masukkan N : ");
     scanf("%d", &n);
     zero_to_n(n);
}
void zero_to_n(int n)
{
     static int i = 0;
     if (n < 0)
          exit(0);
     printf("%d\n", i++);
     zero_to_n(n - 1);
}