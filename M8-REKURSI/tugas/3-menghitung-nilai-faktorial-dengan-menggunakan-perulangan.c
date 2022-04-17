#include <stdio.h>

int fact_it(int n)
{
     int i, fak;
     /******************************************************
      * Menghitung sebuah faktorial dengan proses looping *
      ******************************************************/
     temp = 1;
     for (i = 1; i <= n; i++)
          fak = fak * i;
     return (fak);
}
void main()
{
     int fac;
     printf("Masukkan berapa faktorial : ");
     scanf("%d", &fac);
     printf("Hasil faktorial dari adalah : %d ", fact_it(fac));
     printf('\n');
}