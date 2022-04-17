#include <stdio.h>
#include <string.h>

int jumSiswa;
struct nilai {
    char nama[30];
    float nilaiTugas,nilaiUTS,nilaiUAS;
    };

void input(struct nilai data[]);
void tampil(struct nilai data[]);

main(){
    struct nilai mahasiswa[30];
    printf("\nMENGHITUNG NILAI AKHIR MATA KULIAH KONSEP PEMROGRAMAN");
    printf("\n=====================================================\n");
    input(mahasiswa);
    tampil(mahasiswa);
    }
void input(struct nilai data[]){
    int i;
    fflush(stdin);
    printf("\nBerapa jumlah mahasiswa ? ");
    scanf("%d",&jumSiswa);
    printf("\nMasukan data mahasiswa");
    printf("\n=====================================================\n");
    for(i=0;i<jumSiswa;i++)
        {
        printf("\nData ke-%d",i+1);
        fflush(stdin);
        printf("\nNama\t\t= ");
        scanf("%s",data[i].nama);
        fflush(stdin);
        printf("Nilai tugas\t= ");
        scanf("%f",&data[i].nilaiTugas);
        fflush(stdin);
        printf("Nilai UTS\t= ");
        scanf("%f",&data[i].nilaiUTS);
        printf("Nilai UAS\t= ");
        scanf("%f",&data[i].nilaiUAS);
        }
    }
void tampil(struct nilai data[]) {
    int i,j;
    float akhir;
    char grade;
    printf("\n\t\t\t\tDAFTAR NILAI");
    printf("\n\t\t\tMATAKULIAH KONSEP PEMROGRAMAN");
    printf("\n==================================================================");
    printf("\nNo\tNama Mahasiswa\tTugas\tUTS\tUAS\tAkhir\tGrade");
    printf("\n==================================================================");
    for(j=0;j<jumSiswa;j++) {
        akhir = (0.2 * data[j].nilaiTugas) + (0.4 * data[j].nilaiUAS) + (0.4 * data[j].nilaiUTS);
        if(akhir>=80)
        grade = 'A';
        else if(akhir>=70)
        grade = 'B';
        else if(akhir>=60)
        grade = 'C';
        else if(akhir>=50)
        grade = 'D';
        else
        grade = 'E';
        printf("\n%d\t%s\t\t%.0f\t%.0f\t%.0f\t%.0f\t%c",j+1,data[j].nama,data[j].nilaiTugas,data[j].nilaiUTS,data[j].nilaiUAS,akhir,grade);
        }
    printf("\n==================================================================");
    printf("\n\nTotal mahasiswa = %d",jumSiswa);
}
