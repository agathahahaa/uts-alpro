#include <stdio.h>

int main() {

    int panjang;
    int lebar;
    int luas;

    printf("Masukkan panjang persegi panjang: ");
    scanf("%d", &panjang);
    
    printf("Masukkan lebar persegi panjang: ");
    scanf("%d", &lebar);

    luas = panjang * lebar;
    
    printf("Jadi luas persegi panjang adalah %d\n", luas);

    return 0;
}
