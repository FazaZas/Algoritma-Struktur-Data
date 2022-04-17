#include <stdio.h>
#include <stdlib.h>

typedef struct simpul Node;
struct simpul{
	int data;
	Node *next;
};

Node *head=NULL, *p;

void alokasi();
void awal();
void tampil();
void akhir();
void setelah();

int main()
{
	char jwb;
	puts("Single Link List - Insert After");
	do {
		fflush(stdin);
		alokasi();
		akhir();
		fflush(stdin);
		printf("lagi (y/t) ? ");
		jwb = getchar();
	}while((jwb == 'y')||(jwb == 'Y'));
	tampil();
	fflush(stdin);
	alokasi();
	fflush(stdin);
	puts("Insert setelah node tertentu");
	setelah();
	tampil();
	return 0;
}

void setelah(){
    Node *after;
    int key;

    printf("Disispkan setelah node berapa?");
    scanf("%d", &key);
    after = head;
    while(after->data != key){
        if(after->next == NULL){
            printf("&d tidak ada dalam SLL/n", key);
        exit(0);
    }
    else
        after = after ->next;
    }
    p->next = after->next;
    after->next=p;
}

void akhir(){
    Node *tail;

    if(head == NULL)
        head = p;
    else{
        tail = head;
        while(tail->next != NULL)
            tail=tail->next;
        tail->next = p;
        tail=tail->next;
    }
}

void tampil(){
	Node *baca;

	puts("isi dari SLL");
	baca = head;
	while(baca !=NULL){
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
		puts("alokasi gagal");
		exit(0);
	}else{
		p->data = x;
		p->next = NULL;
	}
}

void awal(){
	if(head != NULL)
		p->next = head;
	head = p;
}
