#include <stdio.h>
#include <sys/time.h>

void selectionSort(
    int array[]);

void printArray(
    int array[]);
struct timeval stop, start; // membuat struck waktu harus membuat #include <sys/time.h> terlebih dahulu
int main()
{
     int array[] = {3, 10, 4, 6, 8, 9, 7, 2, 1, 5};
     puts("Metode Selection Sort");
     printArray(array);
}

void printArray(int array[])
{
     int size = 10;              // panjang array mask. 10
     printf("Array Awal  = [ "); // isi dari array 1 - 4 akan dipanggil kedalam sini
     for (int i = 0; i < size; i++)
     {
          printf("%d ", array[i]);
     }
     printf("]\n");
     gettimeofday(&start, NULL); // waktu mulai jalannya sorting
     selectionSort(array);       // setelah tercetak akan memanggil array dari selection sort
}

void selectionSort(int array[])
{
     int size = 10;
     int perbandingan = 0;
     int penukaran = 0;

     for (int i = 0; i < size; i++)
     {
          int min = i;
          for (int j = i + 1; j < size; j++)
          {
               if (array[j] < array[min])
               {
                    min = j;
               }
               perbandingan++; // nilai perbandingan akan di hitung n * (n-1) / 2
          }

          int temp = array[i];
          if (temp != array[min])
          {
               penukaran++; // menghitung berapa kali penukaran telah dikerjakan
               array[i] = array[min];
               array[min] = temp;
          }
     }
     printf("Array hasil = [ ");
     for (int i = 0; i < size; i++)
     {
          printf("%d ", array[i]);
     }
     printf("]\n");
     gettimeofday(&stop, NULL); // waktu mulai berhentinya jalan sorting
     printf("\nDurasi %lu ms\n", (stop.tv_sec - start.tv_sec) * 1000000 + stop.tv_usec - start.tv_usec);
     printf("Jumlah penukaran = %d\n", penukaran);
     printf("Jumlah perbandingan = %d\n\n", perbandingan);
}