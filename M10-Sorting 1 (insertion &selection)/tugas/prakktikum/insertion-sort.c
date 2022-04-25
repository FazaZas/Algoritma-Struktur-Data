#include <stdio.h>

int main()
{
     int arr[] = {3, 10, 4, 6, 8, 9, 7, 2, 1, 5};
     int temp = 0;
     int length = sizeof(arr) / sizeof(arr[0]);

     printf("\n");
     printf("INSERTION SORT \n");
     printf("-------------- \n");
     printf("\n");
     // Menampilkan elemen array asli
     printf("Semua elemen terdistribusi acak : \n");
     for (int i = 0; i < length; i++)
     {
          printf("%d ", arr[i]);
     }

     // ascending order order. 5 elemen terakhir acak
     for (int i = 0; i < length - 5; i++)
     {
          for (int i = 1; i < length; i++)
          {
               temp = arr[i];
               int j = i - 1;
               /* */
               while (j >= 0 && temp <= arr[j])
               {
                    arr[j + 1] = arr[j];
                    j = j - 1;
               }
               arr[j + 1] = temp;
          }
     }
     printf("\n");
     printf("5 elemen pertama terurut Ascending, dan 5 elemen terakhir acak: \n");
     for (int i = 0; i < length; i++)
     {
          printf("%d ", arr[i]);
     }

     // ascending order setelah 5 random
     for (int i = 1; i < length; i++)
     {
          temp = arr[i];
          int j = i - 1;

          while (j >= 0 && temp <= arr[j]) /* Move the elements greater than temp to one position ahead from their current position*/
          {
               arr[j + 1] = arr[j];
               j = j - 1;
          }
          arr[j + 1] = temp;
     }

     printf("\n");
     printf("data awal, semua elemen terurut ascending: \n");
     for (int i = 0; i < length; i++)
     {
          printf("%d ", arr[i]);
     }

     // descending order order
     for (int i = 1; i < length; i++)
     {
          temp = arr[i];
          int j = i - 1;
          /* */
          while (j >= 0 && temp >= arr[j])
          {
               arr[j + 1] = arr[j];
               j = j - 1;
          }
          arr[j + 1] = temp;
     }

     printf("\n");
     printf("data awal, semua elemen terurut descending: \n");
     for (int i = 0; i < length; i++)
     {
          printf("%d ", arr[i]);
     }
     return 0;
}