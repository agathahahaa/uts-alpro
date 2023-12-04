#include <stdio.h>
#include <stdbool.h>

bool isPrime(int number) {
    if (number <= 1) {
        return false; 
    }
    if (number <= 3) {
        return true; 
    }
    if (number % 2 == 0 || number % 3 == 0) {
        return false;
    }

    for (int i = 5; i * i <= number; i += 6) {
        if (number % i == 0 || number % (i + 2) == 0) {
            return false; 
        }
    }

    return true; 
}

int main() {
    int bilangan;


    printf("Masukkan bilangan bulat: ");
    scanf("%d", &bilangan);

    if (isPrime(bilangan)) {
        printf("%d adalah bilangan prima.\n", bilangan);
    } else {
        printf("%d bukan bilangan prima.\n", bilangan);
    }

    return 0;
}