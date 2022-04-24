#include <stdio.h>
#include <sys/time.h>

int binarySearch(int arr[], int beg, int end, int val)
{
     int mid;
     if (end >= beg)
     {
          mid = (beg + end) / 2;
          if (arr[mid] == val)
          {
               return mid + 1;
          }
          else if (arr[mid] < val)
          {
               return binarySearch(arr, mid + 1, end, val);
          }
          else
          {
               return binarySearch(arr, beg, mid - 1, val);
          }
     }
     return -1;
}

int main()
{
     int arr[] = {11, 14, 25, 30, 40, 41, 52, 57, 70};
     int val = 40;
     int n = sizeof(arr) / sizeof(arr[0]);
     int res = binarySearch(arr, 0, n - 1, val);
     printf(" Array = ");
     for (int i = 0; i < n; i++)
          printf("%d ", arr[i]);
     printf("\n Elemen yang akan dicari adalah %d", val);
     if (res == -1)
          printf("\n Elemen tidak ada dalam array");
     else
          printf("\n Elemen berada pada urutan ke %d pada array", res);
     printf("\n");
     printf("\n");
     struct timeval stop, start;
     gettimeofday(&start, NULL);
     gettimeofday(&stop, NULL);
     printf("\n took %lu us\n", (stop.tv_sec - start.tv_sec) * 1000000 + stop.tv_usec - start.tv_usec);
     return 0;
}