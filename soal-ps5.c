/*
Mulai
    Deklarasi integer n, i, faktorial = 1
    Tampilkan "Masukkan sebuah bilangan bulat positif:"
    Baca n
    Jika n < 0 maka
        Tampilkan "Bilangan harus positif"
    Sebaliknya
        Untuk i dari 1 sampai n lakukan
            faktorial = faktorial * i
        Tampilkan "Faktorial dari", n, "adalah:", faktorial
Selesai
*/

#include <stdio.h>

int main() {
    int n, i, faktorial = 1;
    printf ("Masukkan sebuah bilangan bulat positif: ");
    scanf("%d",&n);
    if  (n < 0) {
        printf("Bilangan harus positif");
    }
    else {
        for (i = 1; i <= n; i++) {
            faktorial *= i;
        }
        printf("Faktorial dari %d adalah: %d\n", n, faktorial);
    }
    return 0;
}