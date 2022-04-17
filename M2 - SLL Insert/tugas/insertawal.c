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

int main()
{
	char jwb;
	puts("Single Link List - Insert Awal");
	do {
		fflush(stdin);
		alokasi();
		awal();
		fflush(stdin);
		printf("lagi (y/t) ? ");
		jwb = getchar();
	}while((jwb == 'y')||(jwb == 'Y'));
	tampil();
	return 0;
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

