#include <stdio.h>
#define MAX 100

main()
{
     int fac;
     printf("\n\nNo. 4a bentuk rekursif");
     printf("\nMasukkan angka : ");
     scanf("%d", &fac);
     printf("Faktorialnya : %d ", fact_rekursi(fac));
}
int fact_rekursi(int n)
{
     if (n < 0)
          return 0;
     else if (n == 0)
          return 1;
     else if (n == 1)
          return 1;
     else
          return n * fact_rekursi(n - 1);
}