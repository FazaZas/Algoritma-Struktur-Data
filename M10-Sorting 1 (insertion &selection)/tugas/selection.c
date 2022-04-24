#include <stdio.h>

int main()
{
     int arr[] = {3, 10, 4, 6, 8, 9, 7, 2, 1, 5};
     int n = sizeof(arr) / sizeof(arr[0]);
     int i, j, temp, position;

     printf("data awal, semua elemen terdistribusi acak:\n");
     for (i = 0; i < n; i++)
          printf("%d ", arr[i]);

     printf("\n");

     /*data awal, 5 elemen pertama terurut descending, dan 5 elemen terakhir acak */
     for (i = 0; i < n - 5; i++)
     {
          position = i;
          for (j = i + 1; j < n; j++)
          {
               if (arr[j] > arr[position])
               {
                    position = j;
               }
               if (position != i)
               {
                    temp = arr[i];
                    arr[i] = arr[position];
                    arr[position] = temp;
               }
          }
     }

     printf("data awal, 5 elemen pertama terurut ascending, dan 5 elemen terakhir acak :\n");
     for (i = 0; i < n; i++)
          printf("%d ", arr[i]);

     printf("\n");

     /*data awal, semua elemen terurut ascending*/
     for (i = 0; i < n; i++)
     {
          position = i;
          for (j = i + 1; j < n; j++)
          {
               if (arr[position] > arr[j])
               {
                    position = j;
               }
               if (position != i)
               {
                    temp = arr[i];
                    arr[i] = arr[position];
                    arr[position] = temp;
               }
          }
     }

     printf("data awal, semua elemen terurut ascending :\n");
     for (i = 0; i < n; i++)
          printf("%d ", arr[i]);
     printf("\n");

     /*data awal, semua elemen terurut descending*/
     for (i = 0; i < (n); i++)
     {
          position = i;
          for (j = i + 1; j < n; j++)
          {
               if (arr[position] < arr[j])
               {
                    position = j;
               }
               if (position != i)
               {
                    temp = arr[i];
                    arr[i] = arr[position];
                    arr[position] = temp;
               }
          }
     }

     printf("data awal, semua elemen terurut descending:\n");
     for (i = 0; i < n; i++)
          printf("%d ", arr[i]);

     printf("\n");

     return 0;
}