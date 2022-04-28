#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10

time_t t1, t2;
long waktuKomputasi;

void printArray(int data[])
{
     for (int i = 0; i < MAX; i++)
     {
          printf("%d ", data[i]);
     }
     printf("\n");
}

void shellSort(int data[])
{
     int did_swap = 1;
     int i, jarak;
     int temp;
     int banding = 0, tukar = 0, geser = 0;

     jarak = MAX;
     sleep(3);
     while (jarak > 1)
     {
          jarak /= 2;
          did_swap = 1;
          while (did_swap == 1)
          {
               did_swap = 0;
               i = 0;
               while (i < (MAX - jarak))
               {
                    banding++;
                    if (data[i] > data[i + jarak])
                    {
                         tukar++;
                         temp = data[i];
                         data[i] = data[i + jarak];
                         data[i + jarak] = temp;
                         did_swap = 1;
                    }
                    i++;
               }
          }
     }

     printArray(data);
     puts("");
     printf("Jumlah Perbandingan %d \n", banding);
     printf("Jumlah Pertukaran %d \n", tukar);
}

int main()
{
     int nilai[MAX] = {3, 5, 1, 9, 2, 0, 7, 8, 6, 4};
     printf("--- SHELL SORT ---\n");
     puts("");
     printf("Sebelum Diurutkan : ");
     printArray(nilai);
     printf("Setelah Diurutkan : ");
     time(&t1);
     shellSort(nilai);
     time(&t2);
     waktuKomputasi = t2 - t1;
     // printArray(nilai);

     puts("");
     printf("Waktu Komputasi = %g\n", waktuKomputasi);
     return 0;
}