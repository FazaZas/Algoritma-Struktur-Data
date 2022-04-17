#include "stdio.h"
#include "conio.h"
#include "stdlib.h"

void alokasi();
void listawal();
void insertfirst();
void cetak();

typedef struct simpul node;
struct simpul{
    int data;
    node *p,*next,*head,*tail;
};
node *p, *head, *after, *next,*tail;
int x;

main(){
   listawal();
   insertfirst();
   getch();
}

void alokasi(){
   printf("Nilai :");scanf("%d",&x);
   p=(node*)malloc(sizeof(node));
   p->data=x;
   p->next==NULL;
}

void listawal(){
   int i,N;
   printf("masukkan banyak data awal :");scanf("%d",&N);
   for(i=0;i<N;i++){
      printf("masukkan nilai data ke-%d\n",i+1);
      alokasi();
      if(head==0){
        head=p;
         tail=p;
      }
      else{
         tail->next=p;
         tail=tail->next;
      }
   }
   cetak();
}

void insertfirst(){
   char pil;
   printf("masukkan nilai data yang akan di insert-kan di awal\n");
   do{
     alokasi();
     p->next=head;
     head=p;
     cetak();
     fflush(stdin);
     printf("inputkan data lagi Y/T?");
     pil=getchar();
   }while(pil=='Y' || pil=='y');
}


void cetak(){
   node *baca;
   baca=head;
   while(baca!=NULL){
      printf("%d\t",baca->data);
      baca=baca->next;
   }
   printf("\n");
}
