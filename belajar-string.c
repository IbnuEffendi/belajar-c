#include <stdio.h>
#include <string.h>

int main() {
    char nama[] = "ibnu"; // dekralasi var nama
    char *result = strchr(nama,'n'); //mencari letak huruf n pada nama
    printf("hasil : %d \n", result - nama); //menampilkan nomor array yang cocok
    printf("%s\n",nama); //menampilkan var nama
    nama[strchr(nama,'u')-nama] = 'o'; //mengganti huruf u dengan o
    printf("%s\n",nama); //menampilkan var nama

    
    char name[100]; //deklarasi var nama
    printf("Masukkan nama Anda: "); //menampilkan teks awal untuk input
    
    fgets(name,sizeof(name),stdin); // Membaca input dari pengguna
    name[strcspn(name,"\n")] = '\0'; // Menghapus line space
    printf("Halo, %s!", name); // Menampilkan output

    
    return 0;


}