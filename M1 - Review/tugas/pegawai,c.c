#include <stdio.h>
int n;
struct date {
int hari, bulan, tahun;
};
struct datakaryawan {
int id,gaji;
char nama[32], jenis;
struct date tglLahir;
};
typedef struct datakaryawan pegawai;
void input(pegawai *data);
void tampil(pegawai *data);
main()
{
pegawai dataPegawai[30];
printf("\nData Pegawai");
printf("\n===================================\n");
fflush(stdin);
printf("\nBerapa jumlah pegawai? ");
scanf("%d",&n);
input(dataPegawai);
tampil(dataPegawai);
}
void input(pegawai *data)
{
int i;
printf("\n===================================\n");
for(i=0;i<n;i++)
{
printf("\n\nData pegawai ke-%d",i+1);
fflush(stdin);
printf("\nNama\t\t\t= ");
scanf("%s",(*data).nama);
fflush(stdin);
printf("Tgl lahir [dd-mm-yyyy]\t= ");
scanf("%d-%d-%d",&(*data).tglLahir.hari,&(*data).tglLahir.bulan,&(*data).tglLahir.tahun);
fflush(stdin);
printf("Jenis Kelamin [L/P]\t= ");
scanf("%c",&(*data).jenis);
printf("Gaji perbulan\t\t= ");
scanf("%d",&(*data).gaji);
data++;
}
}
void tampil(pegawai *data)
{
int i;
printf("\n===================================\n");
printf("\nData pegawai yang telah diinputkan \n");
for(i=0;i<n;i++)
{
printf("\nData pegawai ke-%d",i+1);
printf("\nNama\t\t= %s",(*data).nama);
printf("\nTanggallahir\t=%d-%d-%d",(*data).tglLahir.hari,(*data).tglLahir.bulan,(*data).tglLahir.tahun);
if((*data).jenis == 'L')
printf("\nJenis Kelamin\t= Laki-laki");
else
printf("\nJenis Kelamin\t= Perempuan");
printf("\nGaji perbulan\t= Rp. %d",(*data).gaji);
data++;
}
}
