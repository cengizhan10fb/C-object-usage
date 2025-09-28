#include <stdio.h>
#include <string.h>

struct student {
    char name[15];
    int age;
};

int main() {
    struct student student1;
    struct student student2;

    strcpy(student1.name, "cengizhan");
    student1.age = 20;

    strcpy(student2.name, "bebek kuzey");
    student2.age = 8;

    printf("\n%s", student1.name);
    printf("\n%d", student1.age);
    printf("\n********************************");
    printf("\n%s", student2.name);
    printf("\n%d", student2.age);

    return 0;
}
