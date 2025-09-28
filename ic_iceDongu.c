#include <stdio.h>


int main(){

    int rows;
    int columns;
    char symbol;

    printf("\nsatir sayisini giriniz = ");
    scanf("%d", &rows);

    printf("\nsutun sayisini giriniz = ");
    scanf("%d",&columns);

    scanf("%c");

    printf("\nbir adet sembol giriniz = ");
    scanf("%d",&symbol);

    for (int i = 1; i <= rows; i++)
    {
      for (int j = 1; j <= columns; j++)
      {
        printf("%c",symbol);
      }
    printf("\n");
      
    }
    return 0 ;
}