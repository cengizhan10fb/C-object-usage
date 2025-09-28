#include <stdio.h>


// çalışmadı henüz :((
int main() {
    FILE *dosya = fopen("C:\\Users\\CENGİZHAN\\Desktop\\c_test\\oku.txt", "r");

    if (dosya == NULL) {
        printf("Dosya açılamadı! Yol doğru mu?\n");
        return 1;
    }

    char buffer[300];
    if (fgets(buffer, 300, dosya) != NULL) {
        printf("%s", buffer);
    } else {
        printf("Dosya boş ya da okunamadı.\n");
    }

    fclose(dosya);
    return 0;
}
