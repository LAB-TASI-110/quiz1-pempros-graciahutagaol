#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int nilai[N];

    for(int i = 0; i < N; i++) {
        scanf("%d", &nilai[i]);
    }

    int kode;
    scanf("%d", &kode);

    int jumlahKelompok = 3;  // misalnya 3 kelompok
    int total = 0;

    for(int i = 0; i < N; i++) {
        if(i % jumlahKelompok == kode - 1) {
            total += nilai[i];
        }
    }

    printf("Total nilai kelompok %d = %d\n", kode, total);

    return 0;
}