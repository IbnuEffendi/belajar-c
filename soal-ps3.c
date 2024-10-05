/*
Mulai
    Deklarasi integer n, i
    Deklarasi total = 0
    Tampilkan "Masukkan jumlah elemen:"
    Baca n
    Untuk i dari 1 sampai n lakukan
        Tampilkan "Masukkan elemen ke-", i, ":"
        Baca elemen
        total = total + elemen
    Tampilkan "Jumlah total adalah:", total
Selesai
*/
#include <stdio.h>

int main() {
    int n, x;
    int total = 0;

    printf("Masukkan jumlah elemen: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("Masukkan elemen ke-%d: ",i);
        scanf("%d",&x);
        total += x;
    }
    printf("Jumlah total adalah: %d",total);
    return 0;
}