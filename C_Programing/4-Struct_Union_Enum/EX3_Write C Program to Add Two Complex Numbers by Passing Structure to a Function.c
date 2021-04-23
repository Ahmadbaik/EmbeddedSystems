#include <stdio.h>

struct complexnum {
    float real;
    float img;
};

void read_data(struct complexnum *ps);
struct complexnum add(struct complexnum *ps1,struct complexnum *ps2);
void print_data(struct complexnum *ps);

int main(){
    struct complexnum d1,d2,res;
    printf("Enter 1st complex Number:\n");
    read_data(&d1);
    printf("Enter 2nd complex Number:\n");
    read_data(&d2);
    res = add(&d1,&d2);
    print_data(&res);


    return 0;
}

void read_data(struct complexnum *ps){
    printf("Enter real: ");
    scanf(" %f",&ps->real);
    printf("Enter img: ");
    scanf(" %f",&ps->img);
}

struct complexnum add(struct complexnum *ps1,struct complexnum *ps2){
    struct complexnum temp;
    temp.real = ps1->real + ps2->real;
    temp.img = ps1->img + ps2->img;
    return temp;
}

void print_data(struct complexnum *ps){
    printf("Sum of complex Numbers : %f + %fi",ps->real,ps->img);
}