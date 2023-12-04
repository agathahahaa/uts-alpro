#include <stdio.h>


int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    
    printf("Deret Fibonacci dari 1 sampai 10:\n");
    for (int i = 0; i < 10; ++i) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}
