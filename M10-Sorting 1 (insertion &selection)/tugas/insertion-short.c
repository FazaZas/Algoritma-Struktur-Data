#include <math.h>
#include <stdio.h>

/* fungsi untuk mengurutkan array menggunakan insertion sort*/
void insertionSort(int arr[], int n)
{
     int i, key, j;
     for (i = 1; i < n; i++)
     {
          key = arr[i];
          j = i - 1;

          /* Pindahkan elemen array[0..i-1], yang lebih besar
          dari kunci, ke satu posisi di depan posisinya saat ini */
          while (j >= 0 && arr[j] > key)
          {
               arr[j + 1] = arr[j];
               j = j - 1;
          }
          arr[j + 1] = key;
     }
}

// function untuk mencetak array berukuran n
void printArray(int arr[], int n)
{
     int i;
     for (i = 0; i < n; i++)
          printf("%d ", arr[i]);
     printf("\n");
}

/* Driver program untuk menguji jenis penyisipan */
int main()
{
     int arr[] = {12, 11, 13, 5, 6};
     int n = sizeof(arr) / sizeof(arr[0]);

     insertionSort(arr, n);
     printArray(arr, n);

     return 0;
}
