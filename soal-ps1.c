/*
Mulai
    Deklarasi integer n
    Tampilkan "Masukkan sebuah bilangan bulat:"
    Baca n
    Tampilkan "Bilangan yang dimasukkan adalah:", n
Selesai
*/

#include <stdio.h>

int main() {
    int n;
    printf("Masukkan bilangan bulat: ");
    scanf("%d", &n);
    printf("Bilangan yang dimasukkan adalah: %d", n);
    return 0;
}