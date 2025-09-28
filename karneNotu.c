#include <stdio.h>

int main() {

   char grade;
   printf("\n notunuzu giriniz");
   scanf("%c",&grade);
   
   switch (grade)
   {  
   case 'A':
      printf("mukemmel:)))    derece = 5");
      break;
   case 'B':
      printf("başarili:))     derece = 4");
      break;
   case 'C':
      printf("iyi:)     derece = 3");
      break;  
   case 'D':
      printf("en azindan F degil     derece = 2");
      break;
   case 'F':
      printf("magalesef kaldiniz:((     derece = 1");
      break;
   default:
      printf("lutfen geçerli bir not giriniz");
      break;
   }

    return 0;
}
