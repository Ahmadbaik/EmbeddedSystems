#include <stdio.h>


struct student {
    char name[50];
    int roll;
    float mark;
};

void read_data(struct student *ps);
void print_data(struct student *ps);

int main(){
    struct student s;
    read_data(&s);
    print_data(&s);
    


    return 0;
}

void read_data(struct student *ps){
    //char temp[50];
    printf("Enter Information of student:\n");
    printf("Enter Name: ");
    scanf(" %s",ps->name);
    printf("Enter Roll Number: ");
    scanf(" %d",&ps->roll);
    printf("Enter Marks: ");
    scanf(" %f",&ps->mark);
}

void print_data(struct student *ps){
    printf("Displaying Information:\n");
    printf("Name: %s\n",ps->name);
    printf("Roll: %d\n",ps->roll);
    printf("Marks: %f\n",ps->mark); 
}