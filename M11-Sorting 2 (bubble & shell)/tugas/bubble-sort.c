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
     puts("");
}

void randArray(int data[])
{
     for (int i = 0; i < MAX; i++)
     {
          data[i] = rand() / 3000 + 1;
          printf("%d ", data[i]);
     }
     puts("");
}

void bubbleSort(int data[])
{
     int did_swap = 1;
     int i, j;
     int temp;
     int banding = 0, tukar = 0, geser = 0;

     for (i = 0; i < MAX; i++)
     {
          if (did_swap == 1)
          {
               did_swap = 0;
               for (j = 0; j < MAX - i - 1; j++)
               {
                    banding = banding + 1;
                    ;
                    if (data[j] > data[j + 1])
                    {
                         tukar = tukar + 1;
                         temp = data[j];
                         data[j] = data[j + 1];
                         data[j + 1] = temp;
                         geser = geser + 3;
                         did_swap = 1;
                    }
               }
          }
     }
     printArray(data);
     puts("");
     printf("Jumlah Perbandingan %d \n", banding);
     printf("Jumlah Pertukaran %d \n", tukar);
     printf("Jumlah Pergeseran %d \n", geser);
}

int main()
{
     int nilai[MAX];
     // int nilai[MAX] = {3, 5, 1, 9, 2, 0, 7, 8, 6, 4};
     printf("--- BUBBLE SORT ---\n");
     puts("");
     printf("Sebelum Diurutkan : ");
     randArray(nilai);
     // printArray(nilai);
     printf("Setelah Diurutkan : ");
     time(&t1);
     bubbleSort(nilai);
     time(&t2);
     waktuKomputasi = t2 - t1;

     puts("");
     printf("Waktu Komputasi = %g\n", waktuKomputasi);
     return 0;
}