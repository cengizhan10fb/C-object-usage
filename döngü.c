#include <stdio.h>
#include <string.h>


int main(){
    /*
    for( int i =1; i <= 10; i++ )
    {
      printf("%d\n", i);

    }
      */
    /*
    char name[25];

    printf("\nadin ne? =");
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0';
    printf("merhaba %s", name);


    while (strlen(name) == 0)
    {
        printf("herhangi bir isim girmedin");
        printf("\nadin ne? =");
        fgets(name, 25, stdin);
        name[strlen(name)-1] = '\0';
    }
        */

    int number = 0 ;
    int sum = 0 ;

    
    do
    {
      printf("0\' dan büyük bir sayi giriniz =  ");
      scanf("%d",&number);

      if (number > 0)
      {
        sum += number;

      }
      
    }while (number > 0);


    printf("toplam = %d",sum);


    return 0;
}