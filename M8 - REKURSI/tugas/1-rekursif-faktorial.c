#include <stdio.h>

int faktorial(int angka)
{
     if (angka <= 1)
     {
          return 1;
     }
     else
     {
          return angka * faktorial(angka - 1);
     }
}

int main()
{
     printf("Faktorial dari 5 = %d", faktorial(5));
     getchar();
     return 0;
}