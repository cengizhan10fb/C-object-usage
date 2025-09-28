#include <stdio.h>
#include <stdlib.h>

void menu();
void bakiyeGoster(float bakiye);
float paraYatir(float bakiye);
float paraCek(float bakiye);

int main() {
    float bakiye = 0.0;
    int secim;
    printf("Banka Uygulamasina Hosgeldiniz!\n");
    printf("Lutfen baslangic bakiyenizi giriniz: ");
    scanf("%f", &bakiye);

    do {
        menu();
        printf("Seciminiz: ");
        scanf("%d", &secim);

        switch(secim) {
            case 1:
                bakiyeGoster(bakiye);
                break;
            case 2:
                bakiye = paraYatir(bakiye);
                break;
            case 3:
                bakiye = paraCek(bakiye);
                break;
            case 4:
                printf("Cikis yapiliyor...\n");
                break;
            default:
                printf("Gecersiz secim! Tekrar deneyiniz.\n");
        }
    } while(secim != 4);

    return 0;
}

void menu() {
    printf("\n==== BANKA MENU ====\n");
    printf("1. Bakiyeyi Goruntule\n");
    printf("2. Para Yatir\n");
    printf("3. Para Cek\n");
    printf("4. Cikis\n");
}

void bakiyeGoster(float bakiye) {
    printf("Mevcut Bakiyeniz: %.2f TL\n", bakiye);
}

float paraYatir(float bakiye) {
    float miktar;
    printf("Yatirmak istediginiz miktari giriniz: ");
    scanf("%f", &miktar);
    if (miktar > 0) {
        bakiye += miktar;
        printf("Yeni bakiyeniz: %.2f TL\n", bakiye);
    } else {
        printf("Gecersiz miktar!\n");
    }
    return bakiye;
}

float paraCek(float bakiye) {
    float miktar;
    printf("Cekmek istediginiz miktari giriniz: ");
    scanf("%f", &miktar);
    if (miktar > 0 && miktar <= bakiye) {
        bakiye -= miktar;
        printf("Yeni bakiyeniz: %.2f TL\n", bakiye);
    } else if (miktar > bakiye) {
        printf("Yetersiz bakiye!\n");
    } else {
        printf("Gecersiz miktar!\n");
    }
    return bakiye;
}