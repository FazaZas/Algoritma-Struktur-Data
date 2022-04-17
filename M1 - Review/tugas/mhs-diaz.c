#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
 int k;
 float akhir;
 char grade;

struct{
 char nama[20];
 int nim;
 float tugas;
 float uts;
 float uas;
 }dt[5];

printf("=====Masukan Data Mahasiswa \n\n");

for(k=0;k<3;k++)
 {
 printf("-------------------\n");
 printf("Mahasiswa ke- %i   |\n",k+1);
 printf("-------------------\n");
 printf("Nama = "); scanf("%s",dt[k].nama);
 printf("Nim = "); scanf("%i",&dt[k].nim);
 printf("Nilai Tugas = "); scanf("%f",&dt[k].tugas);
 printf("Nilai UTS = "); scanf("%f",&dt[k].uts);
 printf("Nilai UAS = "); scanf("%f",&dt[k].uas);
 printf("\n\n");
 }
printf("\n\n");
printf("                                DAFTAR NILAI \n");
printf("                        MATA KULIAH KONSEP PEMROGRAMAN \n\n");
printf("-------------------------------------------------------------------------------\n");
printf("No \tNama \tNIM \tTUGAS \tUTS \tUAS \tAkhir \tGrade \n");
printf("-------------------------------------------------------------------------------\n");
 for(k=0;k<3;k++)
 {
akhir = (0.2 * dt[k].tugas) + (0.4 * dt[k].uts) + + (0.4 *dt[k].uas);
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
 printf("%i \t%s \t%i \t%.2f \t%.2f \t%.2f \t%.2f \t%c \t",k+1,dt[k].nama,dt[k].nim,dt[k].tugas,dt[k].uts,dt[k].uas,akhir,grade);
printf("\n");
 }
 return(0);
 }
