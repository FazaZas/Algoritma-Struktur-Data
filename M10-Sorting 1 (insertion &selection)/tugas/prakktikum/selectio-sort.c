#include <stdio.h>

int main()
{
     // Inisialisasi array
     int arr[] = {3, 10, 4, 6, 8, 9, 7, 2, 1, 5};
     int temp = 0;
     // Hitung panjang array arr
     int length = sizeof(arr) / sizeof(arr[0]);

     printf("\n");
     printf("SELECTION SORT \n");
     printf("-------------- \n");
     printf("\n");

     // Menampilkan elemen array asli
     printf("Semua elemen terdistribusi acak : \n");
     for (int i = 0; i < length; i++)
     {
          printf("%d ", arr[i]);
     }

     // ascending order setelah 5 random
     for (int i = 0; i < length - 5; i++)
     {
          for (int j = i + 1; j < length; j++)
          {
               if (arr[i] > arr[j])
               {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
               }
          }
     }
     printf("\n");
     // Menampilkan elemen array setelah menyortir
     printf("5 elemen pertama terurut Ascending, dan 5 elemen terakhir acak: \n");
     for (int i = 0; i < length; i++)
     {
          printf("%d ", arr[i]);
     }

     // ascending order
     for (int i = 0; i < length; i++)
     {
          for (int j = i + 1; j < length; j++)
          {
               if (arr[i] > arr[j])
               {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
               }
          }
     }

     printf("\n");
     // Menampilkan elemen array setelah menyortir
     printf("Semua elemen terurut ascending: \n");
     for (int i = 0; i < length; i++)
     {
          printf("%d ", arr[i]);
     }

     // descending order
     for (int i = 0; i < length; i++)
     {
          for (int j = i + 1; j < length; j++)
          {
               if (arr[i] < arr[j])
               {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
               }
          }
     }

     printf("\n");

     // Menampilkan elemen array setelah menyortir
     printf("Semua elemen terurut Descending: \n");
     for (int i = 0; i < length; i++)
     {
          printf("%d ", arr[i]);
     }
     return 0;
}