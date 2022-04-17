#include<stdio.h>
#include<stdlib.h>
typedef struct simpul Node;
struct simpul{
    int data;
    Node *next;
};

Node *head = NULL, *p;

void alokasi();
void akhir();
void tampil();
void before();

int main(){
    char jwb;
    puts("Single Link List - Insert Before");
    do{
        fflush(stdin);
        alokasi();
        akhir();
        fflush(stdin);
        printf("Lagi? (y/n)");
        jwb = getchar();
    }while(jwb == 'Y'||jwb == 'y');
        tampil();
        fflush (stdin);
        puts("Insert SEBELUM Node tertentu?");
        alokasi();
        fflush (stdin);
        before();
        tampil();
        return 0;
    }

void tampil(){
    Node *baca;
    puts("Isi dari SLL");
    baca = head;
    while(baca != NULL){
    printf("%d\n", baca->data);
    baca = baca->next;
        }
    }

void alokasi(){
    int x;
    printf("Data yang mau disimpan : ");
    scanf("%d", &x);
    p = (Node *) malloc(sizeof(Node));
    if(p==NULL){
        puts("Alokasi Gagal");
        exit(0);
    }else{
        p->data = x;
        p->next = NULL;
        }
    }

void before(){
    Node *bef, *pbef;
    int key;
    printf("Disipkan sebelum node berapa ? ");
    scanf("%d", &key);
    bef = head;
    while(bef -> data != key){
        if(bef -> next == NULL){
            printf("%d tdk ada dlm SLL\n", key);
            exit(0);
        }else{
            pbef = bef;
            bef = bef -> next;
            }
        }
        p -> next = bef;
        pbef ->next = p;
    }

void akhir(){
    Node *tail;
    if(head==NULL){
        head = p;
    }else{
        tail = head;
        while(tail->next != NULL)
        tail = tail->next;
        tail->next = p;
        tail = tail->next;
    }
}
