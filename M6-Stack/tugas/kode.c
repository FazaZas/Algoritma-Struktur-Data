#include <stdio.h>
#include <stdlib.h>
#define MAX 5 // Jumlah maksimum elemen yang dapat disimpan

int top, stack[MAX];
void push();
void pop();
void display();

void main()
{
     int ch;
     while (1) // loop tak terbatas, akan berakhir ketika pilihannya adalah 4
     {
          printf("Menu Stack Using Array\n");
          printf("1. Mengisi Stack (Push)\n");
          printf("2. Mengambil Isi Stack (Pop)\n");
          printf("3. Menampilkan Isi Stack -> LIFO \n");
          printf("4. Keluar \n");
          printf("\n\nMasukkan Pilihan: ");
          scanf("%d", &ch);
          switch (ch)
          {
          case 1: // Mengisi Stack
               push();
               break;
          case 2: // Mengambil Isi Stack
               pop();
               break;
          case 3: // Menampilkan Isi Stack
               display();
               break;
          case 4: // Keluar
               exit(0);
          default:
               printf("\nPilihan Tidak Ada !");
          }
     }
}

void push() // Mengisi Stack
{
     char x;
     if (top == MAX)
     {
          printf("\nStack Penuh");
     }
     else
     {
          printf("\nMasukkan data Anda : ");
          scanf("%s", &x);
          top++;
          stack[top] = x;
     }
}

void pop() // Mengambil Isi Stack
{
     if (top == 0)
     {
          printf("\nStack Kosong");
     }
     else
     {
          printf("\n%c Berhasil dihapus\n", stack[top]);
          top--;
     }
}

void display() // Menampilkan Isi Stack
{
     int i;
     if (top == 0)
     {
          printf("\nStack Kosong");
     }
     else
     {
          printf("\nIsi dari Stack\n");
          for (i = top; i >= 1; --i)
               printf("%c\n", stack[i]);
     }
}
