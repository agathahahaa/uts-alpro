#include <stdio.h>

int main() {
    int bilangan;
    long long faktorial = 1;

    // Meminta pengguna untuk memasukkan bilangan bulat non-negatif
    printf("Masukkan bilangan bulat non-negatif: ");
    scanf("%d", &bilangan);

    // Memeriksa apakah bilangan negatif
    if (bilangan < 0) {
        printf("Faktorial tidak dapat dihitung untuk bilangan negatif.\n");
    }
    // Memeriksa apakah bilangan nol (0)
    else if (bilangan == 0) {
        printf("Faktorial dari 0 adalah 1.\n");
    }
    // Menghitung faktorial untuk bilangan positif
    else {
        for (int i = 1; i <= bilangan; ++i) {
            faktorial *= i;
        }
        printf("Faktorial dari %d adalah %lld.\n", bilangan, faktorial);
    }

    return 0;
}
