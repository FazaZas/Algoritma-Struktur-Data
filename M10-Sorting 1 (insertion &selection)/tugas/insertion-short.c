// Insertion Short
#include <math.h>
#include <stdio.h>

void insertionSort(int arr[], int n) // menyisiplan elemen pada tempatknya
{
     int i, key, j;
     for (i = 1; i < n; i++) // looping for
     {
          key = arr[i]; // Assign elemen array indeks i ke key
          j = i - 1;    // Isisialiasi j untuk pembandingan
          // Bandingkan elemen array pada indeks j dengan key
          while (j >= 0 && arr[j] > key) // if j>=0 dan elemen indeks j>key
          {
               arr[j + 1] = arr[j]; // pindahkan elemen tsb ke 1 pososo berikutnya
               j = j - 1;           // pergi ke elemen terendah
          }                         // Lanjutkakn samapai A[j]not>key
          arr[j + 1] = key;         // Assign temp kembali ke array
     }
}

void printArray(int arr[], int n) // Menampilkan array
{
     int i;
     for (i = 0; i < n; i++)
          printf("%d ", arr[i]);
     printf("\n");
}

int main() // Isi array
{
     int arr[] = {12, 11, 13, 5, 6};
     int n = sizeof(arr) / sizeof(arr[0]); // n merupakan jumlah elemen yang ada di array

     insertionSort(arr, n);
     printf("Array yang diurutkan dalam urutan menaik:\n");
     printArray(arr, n);

     return 0;
}
