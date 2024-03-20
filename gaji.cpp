#include <stdio.h>

int main() {
    char golongan;
    char namaKaryawan[100];
    int jamKerja;
    const int jamNormal = 48;
    const int upahPerJam_A = 5000;
    const int upahPerJam_B = 7000;
    const int upahPerJam_C = 8000;
    const int upahPerJam_D = 10000;
    const int upahLembur = 4000;

    printf("-------------GAJI MINGGUAN KARYAWAN PT. MAKMUR-------------");
    printf("\n \n");
    printf("Masukkan Nama Karyawan                      : ");
    scanf("%[^\n]s", namaKaryawan);
    getchar();
    printf("Tipe Golongan Karyawan (A/B/C/D)            : ");
    scanf("%c", &golongan);
    printf("Masukkan Jumlah Jam Kerja (Dalam Seminggu)  : ");
    scanf("%d", &jamKerja);

    int gaji = 0;
    int lembur = 0;

    if (jamKerja > jamNormal) {
        lembur = (jamKerja - jamNormal) * upahLembur;
        jamKerja = jamNormal;
    }

    switch(golongan) {
        case 'A':
            gaji = jamKerja * upahPerJam_A;
            break;
        case 'B':
            gaji = jamKerja * upahPerJam_B;
            break;
        case 'C':
            gaji = jamKerja * upahPerJam_C;
            break;
        case 'D':
            gaji = jamKerja * upahPerJam_D;
            break;
        default:
            printf("Golongan tidak sesuai.\n");
            return 1;
    }

    printf("\n");
    printf("-------------------MOHON TUNGGU-----------------");
    printf("\n");
    printf("Nama Karyawan   : %s\n", namaKaryawan);
    printf("Gaji Mingguan   : Rp. %d\n", gaji + lembur);
    printf("\n");

    return 0;
}
