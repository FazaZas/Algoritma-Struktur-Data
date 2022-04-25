#include <stdio.h>
#include <sys/time.h>

void insertionSort(
    int array[]);

void printArray(
    int array[]);

int main()
{
     int array[] = {3, 10, 4, 6, 8, 9, 7, 2, 1, 5};
     puts("Metode Insertion Sort");
     printArray(array);
}
struct timeval stop, start; // membuat struck waktu harus membuat #include <sys/time.h> terlebih dahulu
void printArray(int array[])
{
     int size = 10;
     printf("Array Awal  = [ "); // data array 1 - 4 akan dipanggil kedalam sini
     for (int i = 0; i < size; i++)
     {
          printf("%d ", array[i]);
     }
     printf("]\n");
     gettimeofday(&start, NULL); // waktu mulai jalannya sorting
     insertionSort(array);       // selanjutkan akan diurutkan dengan insertionsort
}

void insertionSort(int array[])
{
     int size = 10, perbandingan = 0, penyisipan = 0, pergeseran = 0;
     int i, j, x;
     for (int i = 0; i < size; i++)
     {
          int min = i;
          for (i = 1; i < size; i++)
          {
               x = array[i]; // Assign elemen array indeks i ke x
               j = i - 1;
               // Inisialisasi j utk pembandingan
               // bandingkan elemen array pd indeks j dgn x
               // if j >= 0 dan elemen indeks j > x
               perbandingan++; // menghitung perbandingan n-1
               while (x < array[j])
               {
                    array[j + 1] = array[j]; // pindahkan elemen tsb ke 1 posisi berikutnya
                    j = j - 1;               // go to next lower element
                    pergeseran++;            // menghitung berapakali terjadi pergeseran
               }                             // Lanjutkan sampai A[j] not > x
               if (array[j + 1] != x)
               {
                    array[j + 1] = x; // assign temp kembali ke array
                    penyisipan++;     // menghitung berapakali terjadi penyisipan
               }
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
     printf("Jumlah perbandingan = %d\n", perbandingan);
     // printf("Jumlah pergeseran = %d\n", pergeseran);
     printf("Jumlah penyisipan = %d\n\n", penyisipan);
}