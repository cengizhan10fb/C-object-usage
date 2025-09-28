#include <stdio.h>



enum Month{jan=1,feb=2,mar=3,apr=4,may=5,jun=6,jul=7,aug=8,sep=9,oct=10,nov=11,dec=12};

int main(){

    enum Month thisMonth;
    thisMonth = aug;

    if (thisMonth == 6,7,8)
    {
        printf("yaz tatilindesiniz :))))");
    }
    else
    {
        printf("calis köle kisin isin ne???");
    }
    
    return 0;
}