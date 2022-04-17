// implementasi queue dengan menggunakan array
#include <stdio.h>
#include <stdlib.h>
#define MAX 5 // definisi maksimal ukuran elemen yang dapat disimpan di Queue (antrian)

typedef struct // struktur data queue dlm bntuk struct
{
    char item[MAX]; // elemen item karakter maksimal 5
    int front;      // front untuk menunjuk elemen awal yg masuk queue
    int rear;       // rear untuk menunjuk elemen terakhir yg masuk queue
    int count;      // count untuk menjumlah elemen yang ada dalam queue
} queue;

void inisialisasi(queue *q);    // fungsi inisialisasi awal Queue
int kosong(queue *q);           // fungsi mengecek apakah Queue dalam kondisi kosong
int penuh(queue *q);            // fungsi mengecek apakah Queue dalam kondisi penuh
void enqueue(char x, queue *q); // fungsi memasukan data ke Queue (antrian)
void dequeue(queue *q);         // fungsi mengeluarkan data dari Queue (antrian)
void tampil(queue *q);          // fungsi menampilkan Queue

int main()
{
    queue antrian;
    char x;
    int i;
    int pilihan;

    inisialisasi(&antrian);
    do
    {
        puts("MENU QUEUE using ARRAY:");
        puts("1. Mengisi QUEUE (Enqueue)");
        puts("2. Mengambil isi QUEUE (Dequeue)");
        puts("3. Menampilkan isi QUEUE");
        puts("4. Keluar\n");

        fflush(stdin);
        printf("Masukkan Pilihan Anda : ");
        scanf("%d", &pilihan);
        switch (pilihan)
        {
        case 1:
            fflush(stdin);
            printf("Elemen yang dimasukan : ");
            scanf("%c", &x);
            enqueue(x, &antrian);
            break;
        case 2:
            dequeue(&antrian);
            break;
        case 3:
            printf("Isi dari Queue\n");
            tampil(&antrian);
            break;
        case 4:
            printf("Keluar dari Program ...");
            exit(0);
        default:
            puts("Pilihan salah, mohon ulangi ");
            break;
        }
        puts("");
    } while (pilihan != 4);
}

void inisialisasi(queue *q) // inisialisasi awal
{
    q->count = 0;
    q->front = 0;
    q->rear = 0;
}

int kosong(queue *q) // mengecek apakah Queue kosong
{
    if (q->count == 0) // jika cont = 0
        return 1;      // returnkan true
    else
        return 0; // jika tidak returnkan false
}

int penuh(queue *q) // mengecek apakah Queue penuh
{
    if (q->count == MAX)
        return 1; // jika count=max return true
    else
        return 0; // jika tidak return false
}

void enqueue(char x, queue *q) // operasi memasukan data ke Queue (antrian)
{
    if (penuh(q))                // jika array penuh (cont=MAX), operasi tidak di izinkan
        printf("Queue Penuh\n"); // menampilkan ket Queue Penuh
    else
    {
        q->item[q->rear] = x;          // simpan data pada posisi rear
        q->rear = (q->rear + 1) % MAX; // posisi rear ditambah 1
        (q->count)++;                  // setelah data ditaruh, data di increment count nya
    }
}

void dequeue(queue *q) // operasi mengeluarkan data dari Queue (antrian)
{
    char temp;

    if (kosong(q))                // jika array kosong (cont=0), operasi tidak di izinkan
        printf("Queue Kosong\n"); // tampil keterangan queue kosong
    else
    {
        temp = q->item[q->front];        // temp menampung data dari posisi front
        q->front = (q->front + 1) % MAX; // posisi front ditambah 1
        (q->count)--;                    // setelah data diambil, data di decrement count nya
        printf("Data yang diambil adalah : %c\n", temp);
    }
}

void tampil(queue *q)
{
    if (kosong(q))
        printf("Queue Kosong\n");
    else
    {
        for (int i = q->front; i <= q->rear; i++)
        {
            printf("%c\n", q->item[i]);
        }
    }
}
