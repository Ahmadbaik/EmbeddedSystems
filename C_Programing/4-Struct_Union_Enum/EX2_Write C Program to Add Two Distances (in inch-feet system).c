#include <stdio.h>

struct distance {
    float inch;
    float feet;
};

void read_data(struct distance *ps);
struct distance add(struct distance *ps1,struct distance *ps2);
void print_data(struct distance *ps);

int main(){
    struct distance d1,d2,res;
    printf("Enter Information of First Distance:\n");
    read_data(&d1);
    printf("Enter Information of Seconde Distance:\n");
    read_data(&d2);
    res = add(&d1,&d2);
    print_data(&res);


    return 0;
}

void read_data(struct distance *ps){
    printf("Enter Inch: ");
    scanf(" %f",&ps->inch);
    printf("Enter Feet: ");
    scanf(" %f",&ps->feet);
}

struct distance add(struct distance *ps1,struct distance *ps2){
    struct distance temp;
    temp.inch = ps1->inch + ps2->inch;
    temp.feet = ps1->feet + ps2->feet;
    return temp;
}

void print_data(struct distance *ps){
    printf("Sum of Distance : %f  %f",ps->inch,ps->feet);
}