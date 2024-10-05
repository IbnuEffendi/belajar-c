/*
Mulai
    Deklarasi integer num
    Tampilkan "Masukkan sebuah bilangan bulat:"
    Baca num
    Jika num mod 2 = 0 maka
        Tampilkan "Bilangan genap"
    Sebaliknya
        Tampilkan "Bilangan ganjil"
Selesai
*/

#include <stdio.h>

int main() {
    int num;
    printf("Masukkan sebuah bilangan bulat: ");
    scanf("%d",&num);
    if (num % 2 == 0) {
        printf("Bilangan Genap");
    }
    else {
        printf("Bilangan Ganjil");
    }
    return 0;
}