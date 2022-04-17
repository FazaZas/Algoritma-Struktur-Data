#include <stdio.h>
#include <stdlib.h>

void berhenti_n_kali(int);
main()
{
     int n;
     printf("Berapa kali rekursi : ");
     scanf("%d", &n);
     berhenti_n_kali(n);
}
void berhenti_n_kali(int n)
{
     static int i = 0;
     if (n <= 0)
          exit(0);
     printf("%d kali\n", ++i);
     berhenti_n_kali(n - 1);
}
