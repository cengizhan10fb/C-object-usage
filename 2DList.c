#include <stdio.h>

int main(){

    int ch[2][3] = {{1,2,3},{4,5,6}};

    int rows = sizeof(ch)/sizeof(ch[0]);
    int columns = sizeof(ch[0])/sizeof(ch[0][0]);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("\n%d",ch[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}