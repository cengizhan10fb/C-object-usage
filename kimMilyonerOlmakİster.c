#include <stdio.h>
#include <ctype.h>

int main() {
    char sorular[][100] = {
        "1) C dili hangi yil cikmistir? :",
        "2) Agalarla kodlama kanali hangi yil kurulmustur? :",
        "3) Hangisi bir kodlama dili degildir? :"
    };

    char secenekler[][100] = {
        "A. 1969","B. 1972","C. 2008","D. 2005",
        "A. 2019","B. 2021","C. 2022","D. 2020",
        "A. C#","B. java","C. Python","D. C--"
    };

    char cevaplar[] = {'B', 'C', 'D'};
    int soruSayisi = sizeof(sorular) / sizeof(sorular[0]);

    char tahmin;
    int puan = 0;

    printf("\n Quiz oyunu.");

    for (int i = 0; i < soruSayisi; i++) {
        printf("\n----------------------------------");
        printf("\n%s", sorular[i]);
        printf("\n----------------------------------");

        for (int j = (i * 4); j < (i * 4) + 4; j++) {
            printf("\n%s", secenekler[j]);
        }

        printf("\nCevap giriniz: ");
        scanf(" %c", &tahmin);  // başa boşluk konuldu, buffer temizliği için
        tahmin = toupper(tahmin);

        if (tahmin == cevaplar[i]) {
            printf("Dogru bildiniz :)))\n");
            puan += 1;
        } else {
            printf("Yanlis :((\n");
        }
    }

    printf("\n*********************************");
    printf("\nToplam puanin : %d/%d", puan, soruSayisi);
    printf("\n*********************************\n");

    return 0;
}
