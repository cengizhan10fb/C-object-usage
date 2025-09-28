#include <stdio.h>


int FindMax(int x, int y){
    
return (x>y) ? x : y;
}

int main(){

    int max = FindMax(7,4);

    printf("%d", max);



    return 0;
}