#include <stdio.h>

int main() {
    int sayi;
    int fSayi = 1;

    printf("Faktoriyeli hesaplanacak sayiyi giriniz: ");
    scanf("%d", &sayi);

    for (int i = 1; i <= sayi; i++) {
        fSayi *= i;
    }

    printf("%d! = %d\n", sayi, fSayi);

    return 0;
}
