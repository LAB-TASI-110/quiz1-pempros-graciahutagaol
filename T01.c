#include <stdio.h>
#include <string.h>

struct Menu {
    char kode[5];
    char nama[30];
    int harga;
};

int main() {

    struct Menu daftar[10] = {
        {"NGS", "Nasi Goreng Spesial", 15000},
        {"AP", "Ayam Penyet", 20000},
        {"SA", "Sate Ayam", 25000},
        {"BU", "Bakso Urat", 18000},
        {"MAP", "Mie Ayam Pangsit", 15000},
        {"GG", "Gado-Gado", 15000},
        {"SAM", "Soto Ayam", 17000},
        {"RD", "Rendang Daging", 25000},
        {"IB", "Ikan Bakar", 35000},
        {"NUK", "Nasi Uduk Komplit", 20000}
    };

    char inputKode[5];
    int porsiButet;
    int totalSemua = 0;

    printf("Menu                     Porsi      Harga       Total\n");
    printf("===========================================================\n");

    while (1) {
        scanf("%s", inputKode);

        if (strcmp(inputKode, "END") == 0) {
            break;
        }

        scanf("%d", &porsiButet);

        for (int i = 0; i < 10; i++) {
            if (strcmp(inputKode, daftar[i].kode) == 0) {

                int porsiUcok = 2 * porsiButet;
                int totalPorsi = porsiButet + porsiUcok;
                int totalItem = totalPorsi * daftar[i].harga;

                totalSemua += totalItem;

                printf("%-25s %-10d %-10d %-10d\n",
                       daftar[i].nama,
                       totalPorsi,
                       daftar[i].harga,
                       totalItem);

                break;
            }
        }
    }

    printf("===========================================================\n");
    printf("%-40s %10d\n", "Total Pembayaran", totalSemua);

    if (totalSemua >= 200000)
        printf("Kupon: Kuning\n");
    else if (totalSemua >= 100000)
        printf("Kupon: Biru\n");
    else
        printf("Kupon: Tidak ada\n");

    return 0;
}