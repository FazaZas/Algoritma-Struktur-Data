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
void bebaskan(Node *);
void hapus_awal();
void hapus_node_tertentu();  

int main()
{
	char jwb;
	puts("Single Link List - Delete Node Tertentu");
	do {
		fflush(stdin);
		alokasi();
		akhir();
		fflush(stdin);
		printf("lagi (y/t) ? ");
		jwb = getchar();
	}while((jwb == 'y')||(jwb == 'Y'));
    puts("");
	tampil();
    puts("menghapus node tertentu..");
    fflush(stdin);
    hapus_node_tertentu();
    tampil();
	return 0;
}

void bebaskan(Node *x){
    free(x);
    x = NULL;
}

void hapus_node_tertentu(){
     Node *hapus, *phapus;
     int key;

     printf("data yang mau dihapus ?");
     scanf("%d", &key);

     hapus = head;
     hapus = head;
     if(hapus->data==key)
          hapus_awal();
     else{
          while (hapus->data != key)
          {
               if (hapus->next==NULL)
               {
                    printf("%d tidak ada dalam SLL\n", key);
                    exit(0);
               }else{
                    phapus = hapus;
                    hapus = hapus->next;
               }
               
          }
          phapus->next = hapus->next;
          bebaskan(hapus);
     }
}

void hapus_awal(){
    Node *hapus;

    hapus = head;
    if (hapus -> next == NULL)
        head = NULL;
    else{
        head = hapus->next;
        bebaskan(hapus);
    }

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

