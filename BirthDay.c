#include <stdio.h>


void BirthDay(char name[], int age){
    printf("\n iyiki dogdun %s", name);
    printf("\n %d yasina girdin :))", age);
}

int main(){

    char name[] = "alper";
    int age = 20;

    BirthDay(name, age);

    return 0;

}