#include <stdio.h>

typedef struct 
{
    char nick[25];
    char password[15];
    int id;
}Login;


int main(){

    Login account1 = {"cengizhan","1234",1212};

    printf("\nkullanici adi = %s", account1.nick);
    printf("\nsifreniz = %s",account1.password);
    printf("\nkullanici id = %d", account1.id);

    return 0;

}