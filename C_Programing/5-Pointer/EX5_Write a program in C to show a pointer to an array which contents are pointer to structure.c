#include <stdio.h>
#include <string.h>

struct student {
    char name[50];
    int id;
};

int main(){
    struct student s;
    struct student *ps[10];
    ps[0] = &s;
    strcpy((ps[0]->name),"Ahmad");
    ps[0]->id = 15247;
    printf("Name : %s\n",ps[0]->name);
    printf("ID : %d",ps[0]->id); 

    return 0;
}