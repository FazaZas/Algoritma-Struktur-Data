#include <stdio.h>
#include <stdlib.h>

typedef struct simpul Dnode;
struct simpul
{
     int data;
     Dnode *prev, *next;
};
Dnode *head = NULL, *p;

void alokasi();
void tampil();
void awal();

int main()
{
     char jwb;

     puts("DLL insert awal");
     do
     {
          fflush(stdin);
          alokasi();
          awal();
          fflush(stdin);
          printf("mau lagi (y/t) ? ");
          jwb = getchar();
     } while ((jwb == 'y') || (jwb == 'Y'));
     tampil();
     return 0;
}

void alokasi()
{
     int x;
     printf("Data yang mau disimpan : ");
     scanf("%d", % x);
     p = (Dnode *)malloc(sizeof(Dnode));
     if (p == NULL)
     {
          puts("alokasi gagal");
          exit(0);
     }
     else
     {
          p->data = x;
          p->next = NULL;
          p->prev = NULL;
     }
}

void tampil()
{
     Dnode *baca;

     puts("isi dari DLL :");
     baca = head;
     while (baca != NULL)
     {
          printf("%d", baca->data);
          baca = baca->next;
     }
}

void awal()
{
     if (head == NULL)
     {
          p->next = head;
          head->prev = p;
     }
     head = p;
}
