#include <stdio.h>

void insertionSort(
	int array[]
);

void printArray(
	int array[]
);

int main()
{
    int array1[] = {3, 10, 4, 6, 8, 9, 7, 2, 1, 5};
    int array2[] = {1, 2, 3, 4, 5, 9, 7, 6, 8, 10};
    int array3[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int array4[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    puts("Metode Insertion Sort");
    puts("#######################################");
    printArray(array1);
    puts("#######################################");
    printArray(array2);
    puts("#######################################");
    printArray(array3);
    puts("#######################################");
    printArray(array4);
    puts("#######################################");
}

void printArray(int array[]) {
	
	int i;
    int size = 10;
    printf("Array Awal  = [ ");
    for ( i= 0; i < size; i ++) {
        printf("%d ", array[i]);
    }
    printf("]\n");
    insertionSort(array);
}

void insertionSort(int array[]) {
	
	int i;
    int size = 10;
    int perbandingan = 0;
    int pergeseran = 0;
    int penyisipan = 0;

    for ( i = 1; i < size; i++) {
    	
    	int i;
        int key = array[i];
        int j = i - 1;
        perbandingan++;
        while (j >= 0 && array[j] > key) {
            pergeseran++;
            array[j + 1] = array[j];
            j = j - 1;
        }
        if (array[j + 1] != key) {
            array[j + 1] = key;
            penyisipan++;
        }
    }

    printf("Array hasil = [ ");
    for (i = 0; i < size; i ++) {
        printf("%d ", array[i]);
    }

    printf("]\n");
    printf("Jumlah perbandingan = %d\n", perbandingan);
    printf("Jumlah pergeseran = %d\n", pergeseran);
    printf("Jumlah penyisipan = %d\n", penyisipan);
}
