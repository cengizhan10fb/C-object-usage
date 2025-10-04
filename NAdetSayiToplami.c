#include <stdio.h>

int main()
{
    int n, top = 0, sayi;
    double ort;

    printf("Kac adet sayinin ortalamasini alacaksiniz = ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d. sayiyi giriniz: ", i);
        scanf("%d", &sayi);
        top += sayi;
    }

    ort = (double)top / n;
    printf("Girdiginiz degerlerin ortalamasi = %.2f\n", ort);

    return 0;
}
