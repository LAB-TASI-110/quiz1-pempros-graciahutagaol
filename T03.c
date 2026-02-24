#include <stdio.h>
#include <string.h>

#define MAX 100

struct Laundry {
    char nama[50];
    char asrama[50];

    int celana;
    int sprei;
    int kaos_kaki;
    int jaket;

    int jumlah_luntur;
    char detail_luntur[100];

    char keterangan[100];
    char catatan[100];
};

struct Laundry data[MAX];
int jumlah = 0;

void inputData() {
    printf("\n=== INPUT DATA LAUNDRY ===\n");

    printf("Nama Pemilik Laundry: ");
    scanf(" %[^\n]", data[jumlah].nama);

    printf("Asrama: ");
    scanf(" %[^\n]", data[jumlah].asrama);

    printf("Jumlah Celana: ");
    scanf("%d", &data[jumlah].celana);

    printf("Jumlah Sprei: ");
    scanf("%d", &data[jumlah].sprei);

    printf("Jumlah Kaos Kaki: ");
    scanf("%d", &data[jumlah].kaos_kaki);

    printf("Jumlah Jaket: ");
    scanf("%d", &data[jumlah].jaket);

    printf("Jumlah Pakaian Luntur: ");
    scanf("%d", &data[jumlah].jumlah_luntur);

    printf("Detail Pakaian Luntur (apa saja): ");
    scanf(" %[^\n]", data[jumlah].detail_luntur);

    printf("Keterangan Umum: ");
    scanf(" %[^\n]", data[jumlah].keterangan);

    printf("Catatan untuk Pihak Laundry: ");
    scanf(" %[^\n]", data[jumlah].catatan);

    jumlah++;

    printf("\nData berhasil disimpan!\n");
}

void tampilData() {
    printf("\n=== DATA LAUNDRY ===\n");

    if (jumlah == 0) {
        printf("Belum ada data.\n");
        return;
    }

    for (int i = 0; i < jumlah; i++) {
        printf("\n--- Data ke-%d ---\n", i+1);
        printf("Nama: %s\n", data[i].nama);
        printf("Asrama: %s\n", data[i].asrama);
        printf("Celana: %d\n", data[i].celana);
        printf("Sprei: %d\n", data[i].sprei);
        printf("Kaos Kaki: %d\n", data[i].kaos_kaki);
        printf("Jaket: %d\n", data[i].jaket);
        printf("Jumlah Luntur: %d\n", data[i].jumlah_luntur);
        printf("Detail Luntur: %s\n", data[i].detail_luntur);
        printf("Keterangan: %s\n", data[i].keterangan);
        printf("Catatan: %s\n", data[i].catatan);
    }
}

int main() {
    int menu;

    do {
        printf("\n===== SISTEM LAUNDRY DEL =====\n");
        printf("1. Input Data Laundry\n");
        printf("2. Tampilkan Data\n");
        printf("3. Keluar\n");
        printf("Pilih menu: ");
        scanf("%d", &menu);

        switch(menu) {
            case 1:
                inputData();
                break;
            case 2:
                tampilData();
                break;
            case 3:
                printf("Terima kasih sudah menggunakan sistem Laundry Del!\n");
                break;
            default:
                printf("Menu tidak valid!\n");
        }

    } while (menu != 3);

    return 0;
}