/*
Mulai
    Deklarasi integer a
    Tampilkan "Masukkan sebuah bilangan bulat:"
    Baca a
    Jika a > 0 maka
        Tampilkan "Bilangan positif"
    Sebaliknya jika a < 0 maka
        Tampilkan "Bilangan negatif"
    Sebaliknya
        Tampilkan "Bilangan nol"
Selesai
*/

#include <stdio.h>

int main() {
    int a;
    printf("Masukkan sebuah bilangan bulat: ");
    scanf("%d",&a);
    if (a > 0) {
        printf("Bilangan Positif");
    }
    else if (a < 0) {
        printf("Bilangan Negatif");
    }
    else {
        printf("Bilangan nol");
    }
    
    return 0;
}