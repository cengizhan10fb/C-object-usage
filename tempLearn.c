#include <stdio.h>

int main(){

    char unit;
    float temp;

    printf("\n sicaklik birimini giriniz (f) veya (C) =");
    scanf("%c", &unit);

    unit = toupper(unit);

    switch (unit)
    {
    case 'C':
        printf("\n celcius cinsinden sicakligi giriniz =");
        scanf("%f", &temp);
        temp = (temp*9/5) + 32;
        printf("sicaklik fahreneit cinsinden = %.2f", &temp);
        break;

     case 'F':
        printf("\n fahreneit cinsinden sicakligi giriniz =");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("sicaklik celcius cinsinden = %.2f", &temp);
        break;
    
    default:
        printf("lutfen gecerli bir sicaklik birimi seciniz...");
        break;
    }

    return 0;

}